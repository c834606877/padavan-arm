# Padavan-ARM 新增机型：小米路由器 AX3000T（RD03）适配说明

> 本文件是本次适配的落地记录 + 构建/烧录/验证手册。
> 适配对象：`D:\Github\padavan\padavan-arm`（Padavan ARM 移植版，内核 5.15.167，MT7981）。
> 硬件资料参考：`D:\Github\immortalwrt-mt798x`（内核 5.4）与 `D:\Github\immortalwrt-mt798x-6.6`（内核 6.6，里面才有 AX3000T 的 U-Boot 补丁）。

---

## 1. 目标硬件

| 项目 | 参数 |
| --- | --- |
| SoC | MediaTek MT7981B (Filogic 820)，Cortex-A53 ×2 |
| 无线 | MT7976C（2.4G + 5G DBDC，2T2R，5G 支持 160MHz） |
| 内存 | 256MB DDR3（`mt7981-bl2 spim-nand-ddr3`） |
| 闪存 | 128MB SPI-NAND（ESMT F50L1G41LC / Winbond W25N01GV 等） |
| 有线 | MT7981 内置 MT7531 交换芯片：1×WAN + 3×LAN，千兆 |
| 按键 | reset (GPIO1)、mesh (GPIO0)，均为低有效 |
| LED | blue:status (GPIO9)、yellow:status (GPIO10)，均为低有效 |
| 交换机复位 | GPIO39（高有效），中断 GPIO38 |
| USB | 无 |

与原机型 CMCC RAX3000M（同为 MT7981B）的**主要差异**：

1. RAX3000M 的 WAN 走 SoC 内置 PHY（GMAC1 + `int_gbe_phy`），**AX3000T 的 WAN 是交换芯片的一个端口**，全部 4 个网口都在 MT7531 上，只有一个 GMAC（GMAC0）作为 DSA conduit。
2. RAX3000M 的网口 MAC 存在 `Factory` 分区固定偏移，**AX3000T 的以太网 MAC 是 `Bdata` 分区里的 ASCII 键值对**（`ethaddr` / `ethaddr_wan`），`Factory` 里只有无线基准 MAC（偏移 0x4）。
3. Flash 分区表不同（详见第 3 节）。
4. AX3000T 无 USB。

---

## 2. 启动链路设计（重要）

本仓库原有 RAX3000M 机型依赖 **ubootmod 版 U-Boot**（replaced FIP）。AX3000T 沿用同一思路，但 rootfs 的落地方式做了一点取舍，原因如下：

* padavan 的 rootfs 是 **squashfs**，内核里**没有** OpenWrt 24.10 才引入的 `fitblk` 驱动，所以无法像官方 ImmortalWrt 那样用 `root=/dev/fit0` 从 FIT 里挂根分区。
* 若把 kernel/rootfs 分别塞进两个 UBI 卷，用 `root=/dev/ubiblock0_N` 挂载，`N`（卷 ID）会随卷创建历史变化，十分脆弱。
* AX3000T 的 U-Boot（OpenWrt/ImmortalWrt 版本）默认引导命令是：

  ```
  boot_production = led $bootled_pwr on ; run ubi_read_production && bootm $loadaddr#$bootconf
  ubi_read_production = ubi read $loadaddr fit && iminfo $loadaddr && run ubi_prepare_rootfs
  bootconf = config-1
  ```

  也就是说它会从 UBI 卷 **`fit`** 读一个 FIT 镜像并用 `config-1` 引导。

**因此最终方案（本适配采用）：**

```
UBI 卷 "fit"  ←  一个自包含的 FIT 镜像，内容为：
                     kernel-1   : lzma 压缩的内核
                     fdt-1      : mt7981b-xiaomi-ax3000t-ubootmod.dtb
                     initrd-1   : 根文件系统 squashfs（作为 ramdisk 子镜像）
                 config-1   : bootargs 见下
内核 cmdline  : 由 DTS 的 chosen/bootargs-append 追加
                     root=/dev/ram0 rw rootfstype=squashfs ubi.mtd=ubi
```

优点：

* **不需要修改 U-Boot 环境变量**，U-Boot 出厂默认流程即可启动（FIT 自包含，`root=/dev/ram0` 直接吃 ramdisk）。
  （可选但建议：按 3.5 节第 1 条做一次 `bootcmd` 硬化，避免启动失败时掉进无限 TFTP 重试。）
* **升级是原子的**：只有一个 UBI 卷要写，不会出现升级到一半断电后 kernel/rootfs 不匹配。
* rootfs 从 RAM 读，NAND 只用于存放，坏块/位翻转不影响根文件系统。
* `ubi.mtd=ubi` 让内核自己 attach UBI，padavan 的 `storage_main.sh` 就能找到/创建 `storage` 卷做 `/etc/storage` 持久化。

代价：

* 根文件系统常驻内存约 13MB（AX3000T 有 256MB，可接受）。
* 需要内核开启 `CONFIG_BLK_DEV_RAM`（已在板级内核配置里打开）。
* `bootargs-append` 是本仓库内核已带的补丁（`drivers/of/fdt.c:1161`）才支持的特性，换内核时需注意。

> U-Boot 侧没有做任何修改，用的是 ImmortalWrt/OpenWrt 官方为 AX3000T 编译的 ubootmod U-Boot。

---

## 3. Flash 布局、持久化与重启安全（MTD / UBI）

### 3.1 MTD 分区

DTS 中的分区表与 **U-Boot 自身的分区表完全一致**（都是 `mt7981_xiaomi_mi-router-ax3000t.dts` 里的那份），避免 U-Boot 与 Linux 对 `ubi` 分区大小理解不一致导致 UBI attach 失败：

```
mtd0  BL2        0x0000000  0x0100000   read-only
mtd1  u-boot-env 0x0100000  0x0040000   ← padavan 的 NVRAM（设置存在这里）
mtd2  Bdata      0x0140000  0x0040000   （小米原厂板级数据：ethaddr / ethaddr_wan）
mtd3  Factory    0x0180000  0x0200000   read-only（无线校准数据 + 基准 MAC @0x4）
mtd4  FIP        0x0380000  0x0200000   read-only（ATF BL31 + U-Boot）
mtd5  crash      0x0580000  0x0040000   read-only
mtd6  crash_log  0x05c0000  0x0040000   read-only
mtd7  ubi        0x0600000  0x7000000   ← U-Boot 环境 + padavan 固件与 /etc/storage
mtd8  KF         0x7600000  0x0040000   read-only（小米 keep-flag）
```

> **为什么 0x100000 处的分区叫 `u-boot-env` 而不是小米原厂的 `Nvram`？**
> padavan 的内核 NVRAM 驱动（`drivers/nvram/nvram_linux.c`）在 NAND 平台上写死的分区名是
> `MTD_NVRAM_NAME == "u-boot-env"`（`bcmnvram.h` 里 `NVRAM_MTD_SIZE=0x20000`、`OFFSET=0`）。
> 如果找不到这个分区名，驱动会**静默退回到内存缓冲**（`fake_mt_mtd_write_nm_wifi`），
> 结果就是**每次重启所有设置全部丢失**。RAX3000M-NAND 机型也是这么处理的（它的 env 分区同样叫
> `u-boot-env`，而 U-Boot 自己的环境其实存在 UBI 卷里）。
> 偏移和大小没有改动，只是改了 label，所以不会与 U-Boot 的分区表冲突。
> 唯一需要注意的是：这个位置在小米原厂固件里叫 `Nvram`，所以**建议连同 BL2 一起刷成
> ImmortalWrt 的 preloader**（标准刷机流程本来就包含这一步），否则原厂 BL2 读不到它自己的
> `Nvram` 内容时行为未知。

### 3.2 `ubi` 分区内的卷

| 卷名 | 归属 | 用途 |
| --- | --- | --- |
| `ubootenv` / `ubootenv2` | U-Boot | U-Boot 环境（U-Boot 启动时自己创建、冗余保存） |
| `fit` | padavan | 可启动 FIT（kernel + dtb + rootfs squashfs），**固件升级的写入目标** |
| `rootfs_data` | U-Boot | U-Boot 的 `ubi_prepare_rootfs` 在**首次启动**时自动创建，占满剩余空间；padavan 把它当成 `/etc/storage` 的存储卷使用（见 3.3） |
| `storage` | padavan | 若首次启动走的是 TFTP（不经 `ubi_prepare_rootfs`），则由 `storage_main.sh` 自己创建 |

> ⚠️ U-Boot 控制台里的 `ubi_format` 会清空整个 ubi 分区，连 `fit` 一起删掉，需要重新刷固件。
> 菜单里的 "Reset all settings to factory defaults" 只重写 `ubootenv`，安全。

### 3.3 重启后会怎样？（持久化链路）

结论：**重启能正常加载，而且设置会保留**——但前提是下面这三条链路都成立，这也是本轮复查重点修掉的两个坑。

| 需要持久化的东西 | 存放位置 | 每次启动怎么读回来 | 状态 |
| --- | --- | --- | --- |
| 固件本体（kernel/dtb/rootfs） | UBI 卷 `fit`，**只读** | U-Boot `ubi read $loadaddr fit && bootm $loadaddr#config-1` | ✅ 每次都从 NAND 重新读，与是否重启无关 |
| 根文件系统 | FIT 里的 ramdisk 子镜像 | 内核 `root=/dev/ram0` 从内存挂载 | ✅ 不落盘，每次启动都是干净的；`/etc` 另由 tmpfs 覆盖（`dev_init.sh`） |
| 路由器设置（nvram） | MTD 分区 `u-boot-env`（前 128KB） | 内核 nvram 驱动 `late_initcall` 读取 | ✅ **本轮修复**：原来沿用了小米的 `Nvram` 名字，驱动找不到分区名就会退化成纯内存，重启即丢设置 |
| `/etc/storage`（脚本、证书、dnsmasq 配置等） | UBI 卷里的 bz2 tar 压缩包 | `storage_main.sh load` → `dd` 读出 → `tar -xjf` | ✅ **本轮修复**：`user/mtd-utils` 编译时带 `--without-ubifs`，设备上**没有** `mkfs.ubifs`，所以新建的 UBI 卷永远挂不上 UBIFS，原来会退化成 RAM-only。现在新增「原始 UBI 卷」模式，用 `ubiupdatevol` 写、直接 `dd` 读 |
| U-Boot 环境 | UBI 卷 `ubootenv`/`ubootenv2` | U-Boot 自己读 | ✅ 只有 `saveenv` 会改 |

**首次启动 / 第二次启动的实际流程（都已核对过代码路径）**

1. U-Boot：`ubi read fit` → `iminfo` → `ubi_prepare_rootfs`（若 `rootfs_data` 不存在则动态创建、占满剩余空间）→ `bootm#config-1`。
   - 如果是用 TFTP 直接引导（`tftpboot ... && bootm`），**不会**执行 `ubi_prepare_rootfs`，那么 `rootfs_data` 不存在，`storage_main.sh` 会自己 `ubimkvol -N storage -m` 建一个。两种情况都能用，不需要改 U-Boot 环境变量。
2. 内核：读 DTB 里的 `bootargs-append`，拼接出 `root=/dev/ram0 rw rootfstype=squashfs ubi.mtd=ubi`，挂载 ramdisk 里的 squashfs，并按 `ubi.mtd=ubi` 自动 attach UBI（`ubi0`）。
3. `dev_init.sh`：挂 tmpfs 到 `/etc`、`/tmp` 等；调 `storage_main.sh load`。
4. `storage_main.sh`：按 `storage` → `ubi_data` → `rootfs_data` 顺序选卷；UBIFS 挂载失败（本平台必然）→ 切到原始 UBI 卷模式，`dd` 出备份包并 `tar -xjf` 恢复到 `/etc/storage`；没有任何备份时用 `/etc_ro/storage/*` 兜底。
5. 内核 nvram 驱动从 `u-boot-env` 分区读出变量；rc 若发现数据无效/为空就用默认值生成，并在你保存设置时 `nvram commit` 写回该分区。

**保存路径**（改设置 → 重启 → 还在）

- `nvram commit` → 擦写 `u-boot-env` 分区前 128KB（`mtd->erasesize` 一次擦写）。
- `storage_main.sh save`（rc / WebUI / reset_ss / 各插件脚本都会调 `mtd_storage.sh save`，AX3000T 上会被转交给它）→ `ubiupdatevol <卷> /tmp/storage.tar.bz2`。

**唯一还需要你实测确认的点**：上面第 4、5 步的实际输出（串口日志里搜 `STORAGE INIT` / `STORAGE MAIN` 和 `ASUS NVRAM`），
以及 `cat /proc/mtd` 里第 1 个分区确实叫 `u-boot-env`。

### 3.4 冷启动 / 热重启 / 掉电会不会起不来？（逐条排查）

先说结论：**启动路径是确定性的**，不存在"第一次能起、之后起不来"的机制；
但 U-Boot 自带的兜底逻辑有一个**会把你卡住的陷阱**，下面第 4 条，建议按 3.5 做一次硬化。

| 担心的情况 | 结论 | 依据（都已在本仓库源码里核对） |
| --- | --- | --- |
| 首次能启动，之后（拔电/重启）起不来 | **不会** | 启动链没有一次性状态：U-Boot 每次都 `ubi read $loadaddr fit` 后 `bootm`；FIT（kernel+dtb+rootfs）全程只读；U-Boot 环境存在 UBI 卷里，不依赖 `saveenv`；内核 cmdline 来自 FIT 内的 DTB。padavan 运行期只写三处（见本表最后一行），都不会碰到 `fit` 卷或 BL2/FIP |
| 硬件看门狗导致每 31 秒重启（死循环） | **已排除** | `mtk_wdt_init()` 只在发现 WDT 已被 BL2/U-Boot 打开时置 `WDOG_HW_RUNNING`（`drivers/watchdog/mtk_wdt.c:229`），probe 本身不会去启动它；而 `CONFIG_WATCHDOG_HANDLE_BOOT_ENABLED=y` + `CONFIG_WATCHDOG_OPEN_TIMEOUT=0` 让内核**永久替用户态喂狗**（`watchdog_dev.c:208`：`hw_running && !past_open_deadline`，deadline 为 `KTIME_MAX`）。即使 BL2 留着 WDT 也不会超时。另外全树没有任何程序 open `/dev/watchdog` |
| 内核 panic 后无限重启 | **理论上会，且循环很快** | `CONFIG_PANIC_ON_OOPS=y` + `CONFIG_PANIC_TIMEOUT=1`：任何 oops 都会 panic，并在 1 秒后自动重启。这不是本次适配引入的，但如果我的改动里有导致 panic 的 bug，表现就是"不停重启"。调试方法见 3.5 第 4 条 |
| pstore 把下一次启动踹进 recovery 分支 | **当前配置下不会** | 内核 `# CONFIG_PSTORE is not set`，padavan 永远不会写 pstore 记录，所以 U-Boot 的 `pstore check` 恒为 false，`bootcmd` 总是走 `boot_ubi → boot_production`。⚠️ 若以后有人打开 `CONFIG_PSTORE`（OpenWrt 默认是开的），一次内核 panic 就会让**下一次启动**去 `boot_recovery` |
| **拔电再上电后卡着不进系统 / 一直复位** | ⚠️ **这是唯一真实的陷阱** | U-Boot 默认环境：`bootcmd=if pstore check ; then run boot_recovery ; else run boot_ubi ; fi`，而 `boot_ubi = run boot_production ; run boot_recovery ; run boot_tftp_forever`。也就是说**只要 `ubi read fit` 或 `iminfo` 失败**（`fit` 卷损坏、UBI 元数据异常等），就会去 `boot_recovery`（我们没有 `recovery` 卷 → 失败）→ 进入 `boot_tftp_forever`：**无限循环重试 TFTP，永远不起来**，看起来就像"死循环引导/进不去系统"。注意 `iminfo` 同时会校验 FIT 内部 hash，所以 `fit` 写坏也会走到这里 |
| 掉电时机 | UBI 是掉电安全的；`fit` 卷运行期从不重写 | 运行期只有 nvram（mtd1 单块擦写）、`/etc/storage`（UBI 卷 `ubiupdatevol`）、升级时写 `fit` 三处写操作。**唯一危险窗口是"固件升级写到一半掉电"**，那会让 `fit` 不一致 → 触发上面那个 TFTP 陷阱 |
| 有没有别的脚本会乱写 Flash | 已排查 | `rwfs2ubi.sh` 里有 `ubiformat`，但它找不到 `RWFS` 分区会立刻退出，而且全树没有任何地方自动调用它；`Storage` 相关的旧脚本在没有该分区时已改为转交 `storage_main.sh`；DTS 里把 BL2 / FIP / Factory / crash / crash_log / KF 都标了 `read-only`，即使有脚本误写也会失败而不会破坏数据 |

### 3.5 建议的硬化与自救步骤

**1) 把"无限 TFTP 循环"改成"停在 U-Boot 控制台"（强烈建议，第一次刷完就做）**

```
MT7981> setenv bootcmd 'run boot_production ; run boot_recovery ; echo ### BOOT FAILED - stopped at U-Boot console ###'
MT7981> saveenv
```

这样任何启动失败都会安静地停在控制台等你，而不是每秒重试 TFTP（那种状态在没有串口的情况下几乎没法判断）。

**2) （可选）建一个 `recovery` 卷，放同一份 FIT，实现自愈**

`boot_recovery` 会执行 `ubi read recovery && bootm $loadaddr#config-1`，
所以把同一份固件再存一份到 `recovery` 卷，就能在 `fit` 坏掉时自动改用 recovery 启动
（起来之后可以用 WebUI 重新刷一次固件修好 `fit`）：

```
MT7981> tftpboot $loadaddr $bootfile
MT7981> ubi part ubi
MT7981> ubi remove recovery ; ubi create recovery $filesize dynamic && ubi write $loadaddr recovery $filesize
```

注意：首次从 NAND 启动时 U-Boot 会让 `rootfs_data` 卷**占满剩余空间**，可能没空间放 recovery。
这时可以先把它缩掉（`rootfs_data` 只是 padavan 存 `/etc/storage` 压缩包用的，
清掉等于恢复默认配置，之后重新保存一次设置即可），或在 U-Boot 里重建一个小一点的：

```
MT7981> ubi remove rootfs_data ; ubi create rootfs_data 0x800000 dynamic
```

（8MB 对配置备份包来说绰绰有余。）

**3) 真的起不来时的排查顺序**

1. 接好 USB-TTL（115200 8N1），上电，在 U-Boot 菜单里选 `0. U-Boot console`。
2. 检查 `fit` 卷是否完好：
   ```
   MT7981> ubi part ubi
   MT7981> ubi check fit
   MT7981> ubi read $loadaddr fit
   MT7981> iminfo $loadaddr
   ```
3. 然后直接手动走正常启动路径，看能否起来（能起来就说明只是兜底逻辑的问题）：
   ```
   MT7981> run boot_production
   ```
4. `fit` 卷坏了就重写一份（主机上跑 TFTP 服务，文件放 `fit_*.itb`）：
   ```
   MT7981> setenv serverip 192.168.1.254
   MT7981> setenv bootfile fit_xiaomi_ax3000t-ubootmod_<日期>_<rev>.itb
   MT7981> tftpboot $loadaddr $bootfile
   MT7981> ubi remove fit ; ubi create fit $filesize dynamic && ubi write $loadaddr fit $filesize
   MT7981> reset
   ```
5. 都无效时的最后手段：`mtk_uartboot` + 重新写 BL2/FIP（就是 6.1 节的流程）。

**4) 想看清 panic 内容**（`CONFIG_PANIC_TIMEOUT=1` 会让它 1 秒后就重启，日志根本来不及看）

我们的 `bootargs-append` 是**追加**在 U-Boot 传过来的 cmdline 后面的，
所以可以在 U-Boot 里用环境变量加 `panic=0`（禁用自动重启）：

```
MT7981> setenv bootargs 'console=ttyS0,115200n8 panic=0'
MT7981> run boot_production
```

定位完再恢复：`env default -a ; saveenv`（会回到内置默认环境）。

**5) WebUI 升级时的 UBI 空间**

`fit` 卷要变大就必须有空闲 LEB（升级脚本已把体积上限从 32MB 放宽到 112MB，
因为 FIT 里含 rootfs，正常会到 18MB 左右）。如果升级报空间不足，
先释放 `rootfs_data` 占用的空间（会清掉 `/etc/storage` 里的配置，升完再保存一次即可）：

```
root@AX3000T:/# ubiupdatevol /dev/ubi0_<id> -t     # <id> 用 cat /sys/class/ubi/ubi0_*/name 找
```

---

## 4. 改动清单

### 4.1 新增文件

| 文件 | 说明 |
| --- | --- |
| `trunk/linux-5.15.167/arch/arm64/boot/dts/mediatek/mt7981b-xiaomi-ax3000t.dts` | 公共硬件描述：内存/LED/按键/UART/看门狗/以太网+MT7531/无线 |
| `trunk/linux-5.15.167/arch/arm64/boot/dts/mediatek/mt7981b-xiaomi-ax3000t-ubootmod.dts` | ubootmod 变体：NMBM、SPI-NAND 分区表、Factory nvmem、无线 eeprom、bootargs-append |
| `trunk/configs/templates/AX3000T.config` | 构建参数（产品名/board comp/DTS/功能开关），含新增开关 `CONFIG_FIRMWARE_FIT_WITH_ROOTFS=y` |
| `trunk/configs/boards/AX3000T/board.h` | 板级宏（BOARD_PID/NAME、天线数、网口数、无 USB、RAM 256MB） |
| `trunk/configs/boards/AX3000T/board.mk` | `-DBOARD_XIAOMI_AX3000T -DBOARD_MT7615_DBDC`、`CONFIG_BOARD_RAM_SIZE=256` |
| `trunk/configs/boards/AX3000T/kernel-5.15.167.config` | 以 RAX3000M-NAND 的内核配置为基线，打开 `CONFIG_BLK_DEV_RAM`(64MB) 供 ramdisk 根文件系统使用 |

### 4.2 修改文件

| 文件 | 改动 |
| --- | --- |
| `linux-5.15.167/arch/arm64/boot/dts/mediatek/Makefile` | 注册两个新 dtb |
| `vendors/RAX/Makefile` | `CONFIG_FIRMWARE_FIT_WITH_ROOTFS=y` 时用 `-i $(RAMDISK)` 把 rootfs 打进 FIT，并额外输出裸 FIT（`fit_xiaomi_ax3000t-ubootmod_*.itb`，供 TFTP 刷写） |
| `user/shared/include/ralink_priv.h` | 新增 `MTD_PART_NAME_BDATA`；`BOARD_XIAOMI_AX3000T` 的 MAC 偏移分支 |
| `user/shared/flash_mtd.c` / `.h` | 新增 `flash_mtd_read_ascii_kv()`：从分区头部解析 `key=value` 行（读小米 Bdata 用） |
| `user/rc/common_ex.c` | 新增 `xiaomi_ax3000t_macs()` + `mac_addr_add()`；`get_eeprom_params()` 优先用 Bdata 的 `ethaddr`/`ethaddr_wan`，并按 `2.4G = LAN+1`、`5G = LAN+2` 推导无线 MAC |
| `user/rc/ralink.c` | `get_wired_mac()` 读 Bdata；`set_wired_mac()` 在 AX3000T 上明确拒绝（改写 Bdata ASCII 块风险太高） |
| `user/shared/gpioutils.c` | 识别 `yellow:status` 作为 `LED_WAN`（AX3000T 没有绿色 LED） |
| `user/shared/netutils.h` | `BOARD_XIAOMI_AX3000T` 下 `IFNAME_WAN`/`IFNAME_MAC2` = `"wan"`（该板只有一个 GMAC，没有 `eth1`） |
| `user/rc/rc.c` | AX3000T 的 WebUI 升级改用 `/sbin/sysupgrade-handler-uni.sh`（UBI 路径） |
| `user/scripts/sysupgrade-handler-uni.sh` | AX3000T 的内核写入 UBI 卷 `fit`（不再写 `rootfs` 卷）；`verify_kernel_file()` 的体积上限从 32MB 放宽到 112MB（FIT 里含 rootfs，正常约 18MB，原来的 32MB 上限以后会被撑爆而拒绝升级） |
| `user/scripts/mtd_storage.sh` | 当 `/proc/mtd` 里没有 `Storage` 分区时，把 `load/restore/save/clear/reset` 转交 `storage_main.sh`。这很关键：WebUI 保存设置走的就是 `mtd_storage.sh save`，没有这个转交就会静默丢配置 |
| `user/scripts/storage_main.sh` | 新增「原始 UBI 卷」(`UBI_RAW`) 存储模式——本平台 `user/mtd-utils` 编译时带 `--without-ubifs`，设备上**没有** `mkfs.ubifs`，新建的卷永远挂不上 UBIFS，原逻辑会退化成 RAM-only 导致 `/etc/storage` 重启即丢；同时修掉 `avail_er_blocks` → `avail_eraseblocks` 的 sysfs 拼写错误（导致建卷分支永远走不到）、以及硬编码 `/dev/ubi0_1` 和「任选一个卷兜底」会误选 U-Boot 的 `ubootenv2` 的隐患 |

### 4.3 网口命名约定（有意为之）

DTS 里交换芯片端口标签为 `wan` / `lan1` / `lan2` / `lan3`：

* `net_lan.c` 会把 `lan1..lan4`（实际上只存在 1~3）加进 `br0`，所以 LAN 必须叫 `lan1..lan3`。
* `IFNAME_WAN` 定义为 `"wan"`，即 WAN 直接就是那个 DSA 用户端口。
* DSA conduit（GMAC0）保持 `eth0`，用不到 `eth1`。

### 4.4 顺带修掉的同源问题：RAX3000M-NAND 编出来是**启动不了**的

排查 AX3000T 的启动链路时发现，本仓库原有的 **RAX3000M-NAND** 机型存在同一类缺陷，
表现为"刷完一直反复重启"：

* 该板的 ubootmod U-Boot 环境里**没有 `bootargs=`**（不像 eMMC 版有 `root=/dev/fit0`），
  而它的 DTS 也没有任何 `bootargs`；
* 它的 FIT 里**只有 kernel + dtb**（没有 rootfs，因为模板没开 `CONFIG_FIRMWARE_FIT_WITH_ROOTFS`），
  内核配置里 `CONFIG_BLK_DEV_RAM` 也是关的。

三者叠加的结果：内核收到不到 `root=` → `VFS: Unable to mount root fs` panic →
`CONFIG_PANIC_TIMEOUT=1` 立刻重启 → **无限重启**。已按与 AX3000T 相同的方案修好：

| 文件 | 改动 |
| --- | --- |
| `trunk/configs/templates/RAX3000M-NAND.config` | 加 `CONFIG_FIRMWARE_FIT_WITH_ROOTFS=y`（rootfs 打进 FIT） |
| `trunk/configs/boards/RAX3000M-NAND/kernel-5.15.167.config` | 打开 `CONFIG_BLK_DEV_RAM`（ramdisk 根文件系统） |
| `.../mt7981b-cmcc-rax3000m-nand-ubootmod.dts` | 加 `chosen/bootargs-append = " … root=/dev/ram0 rw rootfstype=squashfs ubi.mtd=ubi"` |
| `trunk/user/scripts/sysupgrade-handler-uni.sh` | 板级分支扩到 `xiaomi_ax3000t*\|cmcc_rax3000m-nand*`，WebUI 升级也写 UBI 卷 `fit` |

（同样是**未编译、未真机验证**的改动；但因果链是在源码里逐条核对过的。）

---

## 5. 构建

环境：**Linux**（Ubuntu 20.04 是本树的目标环境，WSL2 里的 Ubuntu 也可以），需要 `fakeroot`。
仓库自带的交叉工具链已经就绪（`padavan-arm/toolchain-aarch64_cortex-a53_gcc-12.3.0_musl`，约 1.6GB，
是 Linux x86_64 的 ELF 程序，**不能在 Windows 上直接跑**）。

### 5.0 一条命令构建（推荐）

仓库根目录带了一个自带体检的构建脚本，它会先把最容易失败的接线问题挑出来再开始编译：

```bash
cd padavan-arm
./build_ax3000t.sh            # 体检 + 编译
./build_ax3000t.sh --check    # 只体检，不编译
./build_ax3000t.sh --clean    # 先 clear_tree_simple 再编译（之前编过别的机型时用）
```

体检项包括：是否 Linux、`fakeroot/make/gcc` 等必需工具、交叉工具链是否可用且可执行、
`AX3000T.config` / `board.h` / `board.mk` / 内核配置 / DTS 是否齐全且互相一致
（含 dtb 是否已登记、`CONFIG_BOARD_COMP` 与 `CONFIG_BOARD_DT` 是否对得上、
`CONFIG_BLK_DEV_RAM=y` 等关键内核项）。

> ⚠️ **如果仓库放在 `D:\` 这类 Windows 盘上**（脚本会检测 `/mnt/<盘符>/...` 并提醒）：
> 在 WSL2 里直接对 `/mnt/d` 编译会**很慢**，而且可能因为 drvfs 的权限/大小写处理出各种怪问题。
> 建议先复制到 Linux 文件系统再编：
>
> ```bash
> cp -a /mnt/d/Github/padavan/padavan-arm ~/padavan-arm
> cd ~/padavan-arm && ./build_ax3000t.sh
> ```

也可以不用脚本，直接：

```bash
cd padavan-arm/trunk
fakeroot ./build_firmware_modify AX3000T
```

产物（`trunk/images/` 和 `~/workdir/`）：

* `sysupgrade_xiaomi_ax3000t-ubootmod_<日期>_<rev>.bin` —— padavan 风格的升级包（tar：CONTROL + FIT + rootfs）
* `fit_xiaomi_ax3000t-ubootmod_<日期>_<rev>.itb` —— **裸 FIT**，U-Boot 菜单/TFTP 刷写用
* `zImage.lzma`、`ramdisk`

> 说明：`versions.inc` 里 `FIRMWARE_BUILDS_REV=$(shell git rev-parse --short=7 HEAD)`，当前目录不是 git 仓库时会为空，看文件名里出现 `__` 属正常现象。

### 5.1 准备 U-Boot（AX3000T 专用）

**为什么需要另外准备引导器**：padavan-arm 只产出「内核 + 根文件系统」（FIT），**完全不含引导器**。
RAX3000M 能用是因为仓库里附带了预编译的 `RAX3000M_flash_bins/`（BL2 + FIP）；
AX3000T 没有这份现成件，而且小米原厂 U-Boot 只认小米格式的镜像、不认我们的 FIT，
所以必须换成 OpenWrt/ImmortalWrt 的 ubootmod U-Boot（保留原厂 bootloader 的 "stock layout"
是另一条路线，需要另外适配内核在 `ubi_kernel` 里的存放格式，本适配没做）。

**为什么指向 6.6 那棵树**：这个 U-Boot 的板级支持在上游 OpenWrt 里是以**补丁**形式提供的
（构建时下载上游 U-Boot 源码再打补丁），在你本机这两个仓库里：

| 仓库 | AX3000T 的 U-Boot 板级支持 | NAND 颗粒支持 |
| --- | --- | --- |
| `immortalwrt-mt798x-6.6` | ✅ `package/boot/uboot-mediatek/patches/440-add-xiaomi_mi-router-ax3000t.patch`（defconfig + U-Boot 自己的 DTS + 默认环境脚本，含 `ENV_IS_IN_UBI`、卷名 `fit`/`recovery`/`ubootenv`） | ✅ `101-03-mtd-spinand-add-support-for-ESMT-F50L1G41LC.patch` |
| `immortalwrt-mt798x`（5.4） | ❌ 该仓库 `package/boot/uboot-mediatek/patches/` 只有 6 个通用补丁（010 系列 + mt7622 的），**没有任何 mt7981 板级 defconfig**；整个 `package/boot/` 里唯一提到 ax3000t 的只有 `uboot-envtools` | ❌ 没有 ESMT 补丁 |

**准确的说法**是：**在你本机已有的两个仓库里，只有 6.6 那个能编出 AX3000T 的 U-Boot**；
ImmortalWrt / OpenWrt **官方发布页里同机型（`...-ax3000t-ubootmod-...`）的现成文件同样可用**，不必自己构建。
例如 `downloads.immortalwrt.org/releases/<版本>/targets/mediatek/filogic/` 下的
`immortalwrt-<版本>-mediatek-filogic-xiaomi_mi-router-ax3000t-ubootmod-preloader.bin`（约 220KB）
和 `...-bl31-uboot.fip`（约 0.8～0.9MB），OpenWrt 官方 24.10 的 filogic 目录里也有同名文件。

> ⚠️ **用哪个来源都行，但要核对 U-Boot 环境**：本适配假设的环境（也就是 6.6 仓库里那份
> `xiaomi_mi-router-ax3000t_env`）是 `boot_production = led ... ; run ubi_read_production && bootm $loadaddr#$bootconf`、
> `ubi_read_production = ubi read $loadaddr fit && ...`、`bootconf = config-1`
> —— 即从 UBI 卷 **`fit`** 读 FIT、按 **`config-1`** 引导。
> 不同 OpenWrt 版本的环境脚本可能会有小改动，所以第一次进 U-Boot 控制台时先核对一眼：
>
> ```
> MT7981> printenv bootcmd boot_production ubi_read_production bootconf
> ```
>
> 如果对不上（或你不想依赖它），直接用 3.5 节第 1 条那种方式把引导命令写死即可，
> 与 U-Boot 版本解耦：
>
> ```
> MT7981> setenv bootcmd 'ubi read $loadaddr fit && bootm $loadaddr#config-1'
> MT7981> saveenv
> ```


**自己构建的话**：把 6.6 那棵树配成 `MediaTek Filogic` 目标并选中设备
`Xiaomi Mi Router AX3000T (OpenWrt U-Boot layout)`，然后整包构建一次
（`make -j$(nproc)`）。产物在 `bin/targets/mediatek/filogic/`：

```
...-xiaomi_mi-router-ax3000t-ubootmod-preloader.bin   (NAND 版 BL2, spim-nand-ddr3)
...-xiaomi_mi-router-ax3000t-ubootmod-bl31-uboot.fip  (ATF BL31 + U-Boot)
```

> 注意：这两个文件是由**镜像规则**拼装的
> （`target/linux/mediatek/image/filogic.mk` 里的 `Build/mt7981-bl2` / `Build/mt7981-bl31-uboot`
> 从 `staging_dir/.../image/` 取 `mt7981-spim-nand-ddr3-bl2.img` 和
> `mt7981_xiaomi_mi-router-ax3000t-u-boot.fip`），所以**只单独编译 uboot-mediatek 包是不够的**，
> 走一次完整的目标构建最省事，产物名也和官方发布一致。

**mtk_uartboot 还需要 DDR3 版 RAM BL2**（BootROM 模式通过 UART 下载用）。
同样可以从这棵树里一起得到：ATF 包里 `Trusted-Firmware-A/mt7981-ram-ddr3` 变体
（"MediaTek MT7981 (RAM, DDR3)"，`BOOT_DEVICE:=ram`、`RAM_BOOT_UART_DL:=1`，filogic 目标默认就会编）
产出的 `mt7981-ram-ddr3-bl2.bin` 就是它；更省事的办法是从 mtk_uartboot 的发布包（自带各 SoC/DDR 的 bl2）里取。

⚠️ `padavan-arm/RAX3000M_flash_bins/mt7981-ram-ddr4-bl2.bin` 是 **DDR4** 版本，
**不能**用于 AX3000T（AX3000T 是 DDR3，对应 `mt7981-bl2 spim-nand-ddr3`）。


---

### 5.2 只有 Windows / 没有 Linux 时：用 GitHub Actions 编译

本机是 Windows 且不想装 WSL 的话，可以让 GitHub 的 Linux 服务器替你编，浏览器里下载固件。
**关键在于上游仓库 `github.com/c834606877/padavan-arm` 把 1.6GB 的交叉工具链一起提交在仓库里**
（不是 Git LFS），并且自带 `.github/workflows/CI.yml`，所以：

1. **Fork** <https://github.com/c834606877/padavan-arm>（fork 是服务器端复制，不用上传工具链）。
2. 把本适配改动的文件上传到 fork（`README.AX3000T.md`、`build_ax3000t.sh`、`trunk/` 下的
   板级配置与源码、`.github/workflows/CI.yml`）；如果本机存在
   `D:\Github\padavan\ax3000t-upload\` 目录，那里就是按仓库结构整理好的上传包，
   直接把它里面的 `trunk`、`.github` 和根目录文件拖进 fork 的 **Add file → Upload files** 即可
   （会保留目录结构）。
3. 在 fork 的 **Actions** 页点一次 *"I understand my workflows, go ahead and enable them"*。
4. **Actions → CI → Run workflow**。随附的 `CI.yml` 已把矩阵改成只编 `AX3000T`
   （约 20~40 分钟），并在产物里额外带上 `fit_*.itb`。
5. 在 run 页面底部 **Artifacts** 下载 `images_AX3000T_<短哈希>`（7z）。
   失败的话下载同页面的 `failure-logs`（含 `trunk/build.log`）。

> ⚠️ 我改的 `.github/workflows/CI.yml` 是基于上游那份做的**最小改动**：矩阵只留 AX3000T、
> 补了几个 apt 依赖（`fakeroot` 等）、产物里多拷一个 `fit_*.itb`。改动量很小，
> 但 CI 的 YAML 语法我只做了本地解析校验，没有真的在 GitHub 上跑过。

---

## 6. 烧录

> ⚠️ 以下操作会改写引导区，操作不当可能变砖。AX3000T 有 mtk_uartboot（BootROM 模式）救砖通路，但请务必先接好 USB-TTL 串口（115200 8N1）并能看到 BL2/U-Boot 输出。

### 6.1 第一次：通过 UART 进入 U-Boot（不写 Flash）
```bash
# 断电按住 reset 后上电，或直接用 mtk_uartboot 打 BootROM
mtk_uartboot -s COM3 -p mt7981-ram-ddr3-bl2.bin -a -f \
    immortalwrt-mediatek-filogic-xiaomi_mi-router-ax3000t-ubootmod-bl31-uboot.fip \
    --brom-load-baudrate 115200 --bl2-load-baudrate 115200
```

进入菜单后选 `0. U-Boot console`。

### 6.2 先不写 Flash，直接 TFTP 试启动 padavan（推荐的第一步验证）

这样即使固件有问题，重启就回到原状，Flash 未被改动：

```
MT7981> setenv ipaddr 192.168.1.1
MT7981> setenv serverip 192.168.1.254
MT7981> setenv bootfile fit_xiaomi_ax3000t-ubootmod_<日期>_<rev>.itb
MT7981> tftpboot $loadaddr $bootfile && bootm $loadaddr#config-1
```

（把 `fit_*.itb` 放到主机 TFTP 根目录；主机 IP 与 `serverip` 一致。）

预期：内核出现 `Machine model: Xiaomi Mi Router AX3000T (custom U-Boot layout)`，
cmdline 里能看到 `root=/dev/ram0 rw rootfstype=squashfs ubi.mtd=ubi`，
最后挂载 squashfs 根文件系统并进入 padavan 的 init。

### 6.3 写入 Flash（确认能启动后再做）

方式 A：U-Boot 菜单
1. `6. Load BL31+U-Boot FIP via TFTP then write to NAND`（写 FIP）
2. `7. Load BL2 preloader via TFTP then write to NAND`（写 BL2）
3. `4. Load production system via TFTP then write to NAND`
   —— 该菜单项执行 `ubi remove fit; ubi create fit $filesize; ubi write ...`，把 FIT 写进 UBI 卷 `fit`

方式 B：U-Boot 控制台手动

```
MT7981> ubi part ubi
MT7981> ubi check fit && ubi remove fit
MT7981> tftpboot $loadaddr $bootfile
MT7981> ubi create fit $filesize dynamic && ubi write $loadaddr fit $filesize
MT7981> reset
```

方式 C：已经在跑 padavan 时，用 WebUI 的「固件升级」上传 `sysupgrade_*.bin`
（走 `sysupgrade-handler-uni.sh` → 写入 UBI 卷 `fit`）。

> 说明：写入 NAND 后**第一次**从 NAND 启动时，U-Boot 的 `ubi_prepare_rootfs` 会自动创建
> `rootfs_data` 卷（占满剩余 UBI 空间）。padavan 会把它当作 `/etc/storage` 的存储卷
> （见 3.3 节），不需要任何额外操作。
> 另外因为 `u-boot-env` 占用了小米原厂 `Nvram` 的位置，**建议 BL2 和 FIP 一起刷**
> （方式 A 的 1、2 步），不要只刷 FIP。

---

## 7. 启动后验证清单

| 项目 | 预期 | 检查方法 |
| --- | --- | --- |
| 内核启动 | 无 panic，根为 squashfs/ram0 | 串口日志；`mount | grep ' / '` |
| 内存识别 | 256MB | `cat /proc/meminfo` |
| MTD 分区 | 9 个分区，第 2 个叫 `u-boot-env` | `cat /proc/mtd` |
| UBI | `ubi0` 已 attach，含 `fit` 卷，另有 `rootfs_data`（或 `storage`） | `ubinfo -a` 或 `cat /sys/class/ubi/ubi0_*/name` |
| LAN | `br0` 内含 `lan1 lan2 lan3` | `brctl show` |
| WAN | 存在 `wan` 接口并能拨号/DHCP | `ip link show wan`、`nvram get wan_ifname` |
| 有线 MAC | LAN/WAN 与机器背面标签一致 | `ip link show br0` / `ip link show wan` |
| 无线 MAC | 2.4G = LAN+1、5G = LAN+2 | `iwpriv rax0 get_mac` 等，或 WebUI |
| 2.4G / 5G | 能起来并关联 | `iw dev`、WebUI 无线状态 |
| LED | blue:status 常亮表示运行 | `ls /sys/class/leds/` |
| 按键 | reset 短按/长按行为正常，mesh 键可识别 | `cat /proc/keys` 或 btn_action 日志 |
| nvram 存储 | 串口日志有 `ASUS NVRAM, v0.08 ... Integrity:`，且分区名是 `u-boot-env` | `cat /proc/nvram` |
| nvram 持久化 | 改设置 → `nvram commit` → 重启 → 设置还在 | `nvram get <key>` 对比 |
| /etc/storage 持久化 | 串口日志有 `STORAGE INIT: ... using raw UBI volume mode` + `STORAGE MAIN: ... saved to raw UBI volume`；重启后配置项保留 | 改设置 → 重启 → 检查 |
| **热重启** | WebUI 里点重启 / `reboot` 后能自动重新进入 padavan，不进 U-Boot、不循环 | 重启后 ping 通、串口无 `TFTP` 重试 |
| **冷启动（拔电再上电）** | 拔电 10 秒再上电，能自动进入 padavan | 串口日志 |
| **连续重启 3 次** | 每次都起得来，且设置仍在（验证没有一次性状态） | 重复上面两步 |
| 引导兜底 | 正常启动时串口**不应**出现 `boot_tftp_forever` 的 TFTP 重试刷屏 | 串口日志 |
| 温度/CPU | 双核都在 | `cat /proc/cpuinfo` |

---

## 8. 已知风险 / 待办（务必先看）

1. **本适配未经过编译和真机验证。** 当前工作机上没有 Linux 构建环境（也没有 dtc），
   所以只做了静态检查：DTS 已通过自写的括号/分号/注释配平校验，C 代码按现有风格手写，
   尚未 `make` 过一次。第一次编译如果报错，基本都是小问题（缺 include、宏名拼写之类）。
2. **只支持 MT7531 交换芯片的版本。** 较新的 AX3000T（RD03 v2）用的是 Airoha AN8855 交换芯片，
   本仓库内核里没有 `an8855` 驱动，**不支持**。刷之前请确认交换芯片型号（拆机或看 U-Boot 串口日志里
   有没有 `mt7530-mdio mdio-bus:1f` 打印）。
3. **NMBM 的 OOB 覆盖选项缺失。** OpenWrt 6.6 的 AX3000T DTS 里有
   `mediatek,bmt-mtd-overridden-oobsize = <64>`，本仓库 5.15 内核没有这个属性。
   如果开机后 NAND 读写异常（例如 `Factory` 读不到、无线无法校准），
   可先尝试去掉 DTS 里的 `mediatek,nmbm` 三行再编译对比。
4. **`mediatek,mtd-eeprom` 用的是 5.15 老写法**（`<&factory 0x0>`），与 RAX3000M 一致；
   6.6 里的 `nvmem-cells = <&eeprom_factory_0>` 写法本仓库 mt76 不支持，**不要照抄 6.6 的 DTS**。
5. **WAN 是 DSA 用户端口**，padavan 原设计假设 WAN 是独立的第二个 MAC（`eth1`）。
   本适配通过把 `IFNAME_WAN`/`IFNAME_MAC2` 改成 `"wan"` 来兼容，但 `net_wan.c` 里一些
   VLAN/软桥（IPTV、多 WAN）相关的分支没有在真机上验证过，可能需要进一步调。
6. **WebUI 固件升级脚本未实测。** `sysupgrade-handler-uni.sh` 的 UBI 分支已按 AX3000T 改为写
   `fit` 卷（体积上限也从 32MB 放宽到 112MB），升级失败时会保留原 `fit` 卷（不会砖，
   但需要串口重刷）。**建议第一次先用 TFTP 方式升级。** 另外升级前请确认 UBI 有空闲 LEB，
   否则 `fit` 卷长不大（见 3.5 第 5 条）。
7. **引导失败的"无限 TFTP"陷阱、panic 快速重启循环、以及看门狗/pstore 两条路径的排查结论，
   都写在 3.4 / 3.5 节**，其中 3.5 第 1 条的 `bootcmd` 硬化命令建议第一次刷完就执行。
7. **持久化链路已修好但未实测**（详见 3.3 节）：nvram 依赖分区名 `u-boot-env`，
   `/etc/storage` 依赖 `storage_main.sh` 的新「原始 UBI 卷」模式。这两处是本轮复查时
   从代码里挖出来的真问题（原样下去会表现成「重启后设置全丢」），
   所以请务必按第 7 节的验证清单在串口里确认一次日志。
8. **`u-boot-env` 占用了小米原厂 `Nvram` 的位置**（前 128KB）。若你刻意只刷 FIP 不刷 BL2，
   原厂 BL2 是否依赖 `Nvram` 内容未经验证——建议按标准流程把 BL2 一起刷掉。
9. **`productid` / `firmver` 会显示 `unknown`**：`common_ex.c` 会从名为 `kernel` 的 MTD 分区
   读固件头，而 ubootmod 布局里没有这个分区（RAX3000M-NAND 机型同样如此）。纯显示问题。
10. **未添加 `l1profile.dat` / `SingleSKU*.dat`。** RAX3000M-NAND 机型也没有，
    若 WebUI 无线部分出现异常，可从 `configs/boards/RAX3000M/`（emmc 版）拷贝过来放到
    `configs/boards/AX3000T/` 试。
11. **无线默认 SSID/密码** 见 `user/shared/defaults.h`（按 BOARD_PID 生成），
    与 RAX3000M 一致：默认 IP 192.168.1.1，账号 `admin`/`admin`。
12. **`-DBOARD_MT7615_DBDC` 是刻意与 RAX3000M 保持一致**（同为 MT7981 平台、驱动同为 mt7915 系）。
    若无线接口命名/行为有疑问，可对比改用 `-DBOARD_MT7915_DBDC`（`net_lan.c:155`、
    `httpd/ralink.c:920` 等分支会走另一条路径）。
13. **`storage_main.sh` / `mtd_storage.sh` 的修改是通用修复**（不限 AX3000T）：
    拼写错误的 sysfs 属性名、「任选卷兜底」会误选 `ubootenv2` 的隐患、
    以及没有 `Storage` 分区时的转交逻辑，对 RAX3000M-NAND 等其它 UBI 机型同样有意义，
    但可能改变它们原有的存储行为，回归时请一并看一眼。

### 后续可以做的事

* 补齐 `sysupgrade-handler` 的 NAND/UBI 分支的失败回滚与 CRC 校验。
* 增加 "stock layout" 变体（保留小米原厂 BL2/FIP，只刷 `ubi_kernel` + `ubi`），
  降低首次刷机风险 —— 但需要先摸清小米原厂 U-Boot 从 `ubi_kernel` 取内核的具体格式。
* 把 `bootargs-append` 的内容也复用给 RAX3000M-NAND，让 NAND 机型走同一套 UBI 卷布局。
* 如果以后升级到 OpenWrt 24.10 系内核，可引入 `fitblk` 驱动，改回 `root=/dev/fit0`，
  从而省掉那 13MB 的 ramdisk 内存占用。

---

## 9. 参考来源（都在本机两个仓库里，可自行核对）

| 内容 | 位置 |
| --- | --- |
| AX3000T 硬件描述（LED/按键/交换机/分区/MAC/eeprom） | `immortalwrt-mt798x-6.6/target/linux/mediatek/dts/mt7981b-xiaomi-mi-router-common.dtsi`、`...-ax3000t.dtsi`、`...-ax3000t.dts`、`...-ax3000t-ubootmod.dts` |
| 旧版（内核 5.4）参考 | `immortalwrt-mt798x/target/linux/mediatek/files-5.4/.../mt7981-xiaomi-mi-router.dtsi` |
| U-Boot 分区表 / GPIO / BootROM 分区 | `immortalwrt-mt798x-6.6/package/boot/uboot-mediatek/patches/440-add-xiaomi_mi-router-ax3000t.patch` |
| U-Boot 默认环境（bootcmd/bootmenu/卷名） | 同上补丁末尾的 `xiaomi_mi-router-ax3000t_env` |
| MAC 来源（Bdata ASCII）与无线 MAC 推导 | `immortalwrt-mt798x-6.6/target/linux/mediatek/filogic/base-files/etc/board.d/02_network`（`mediatek_setup_macs`） |
| 镜像/ARTIFACT 定义（DDR3、preloader/fip 命名） | `immortalwrt-mt798x-6.6/target/linux/mediatek/image/filogic.mk`（`Device/xiaomi_mi-router-ax3000t-ubootmod`） |
| 原厂 NMBM 分区串（stock layout） | `immortalwrt-mt798x/target/linux/mediatek/mt7981/base-files/lib/upgrade/platform.sh` |

---

## 10. 排错速查（"刷完起不来"怎么定位）

### 10.1 第一步永远是核对文件名里的目标

镜像名格式是 `sysupgrade_<CONFIG_BOARD_COMP>_<日期>_<rev>.bin`：

| 文件名里的关键字 | 对应机型 |
| --- | --- |
| `xiaomi_ax3000t-ubootmod` | ✅ 小米 AX3000T |
| `cmcc_rax3000m-nand-ubootmod` | ⚠️ CMCC RAX3000M **NAND 版**（不是 AX3000T！） |
| `cmcc_rax3000m-emmc-ubootmod` | ⚠️ CMCC RAX3000M **eMMC 版** |

名字对不上就是**编错了目标**：`fakeroot ./build_firmware_modify <目标>` 的 `<目标>`，
或者 CI 里 matrix 的 `targets`，必须是 `AX3000T`。
（上游自带的 CI 默认编 `QEMU RAX3000M RAX3000M-NAND`，产物里会有三个固件，很容易拿错。）

### 10.2 "一直反复重启" = 内核 panic 后被自动重启

串口上会看到 `Kernel panic - not syncing: VFS: Unable to mount root fs on unknown-block(0,0)`
（或类似），大约 1 秒后就重启 —— 因为内核配置里是
`CONFIG_PANIC_ON_OOPS=y` + `CONFIG_PANIC_TIMEOUT=1`。这不是 U-Boot 的问题，U-Boot 是好的。

常见原因，按概率排序：

1. **FIT 里没有 rootfs，而且没人传 `root=`**。自查两条：
   * U-Boot 里 `printenv bootargs` —— 有没有 `root=`；
   * `ubi part ubi ; ubi read $loadaddr fit ; iminfo $loadaddr` —— 输出的 images 列表里
     有没有 `initrd-*`（有就说明 rootfs 在 FIT 里）。
   本仓库的 RAX3000M-NAND 原来就属于这种，已在 4.4 修掉。
2. **拿错机型的固件**（例如把 RAX3000M-NAND 的固件刷到 AX3000T 上）：DTB、分区表、
   LED/GPIO 全都不对。见 10.1。
3. **U-Boot 与内核的分区表不一致** → `ubi read fit` 读不到正确内容，见第 3 节开头。

想看完整 panic 内容（1 秒就重启，日志看不清）：在 U-Boot 里用环境变量补 `panic=0`，
我们的 `bootargs-append` 是**追加**在后面，不冲突：

```
MT7981> setenv bootargs 'console=ttyS0,115200n8 panic=0'
MT7981> run boot_production
```

### 10.3 "一直进 U-Boot / 无限 TFTP 重试"

那是 `boot_tftp_forever` 兜底（`boot_production` 失败后的行为），见 3.4 与 3.5。

### 10.4 怎么从重启循环里救回来

内核 panic 循环**不会影响 U-Boot 本身**，所以每一轮都会重新进 U-Boot：

1. 接好串口，上电后**狂按任意键**（或进菜单选 `0. U-Boot console`）就能停下来。
2. 看状态：`ubi part ubi` → `ubi check fit` → `ubi read $loadaddr fit` → `iminfo $loadaddr`。
3. 用 TFTP 写一份**正确的**固件进去：

```
MT7981> setenv serverip <你主机的 IP>
MT7981> setenv bootfile fit_xiaomi_ax3000t-ubootmod_<日期>_<rev>.itb
MT7981> tftpboot $loadaddr $bootfile
MT7981> ubi remove fit ; ubi create fit $filesize dynamic && ubi write $loadaddr fit $filesize
MT7981> reset
```

4. 想彻底回到官方固件：把 ImmortalWrt/OpenWrt 的
   `...-xiaomi_mi-router-ax3000t-ubootmod-squashfs-sysupgrade.itb` 写进**同一个 `fit` 卷**即可
   （它们的 U-Boot 用 `root=/dev/fit0` 引导，与你刷进去的镜像配套）。

