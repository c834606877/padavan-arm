# 只有 Windows 怎么编译 AX3000T 固件 —— GitHub Actions 方案

思路：不用本机 Linux。把改动搬到 GitHub，让 GitHub 的 Linux 服务器（ubuntu-22.04）编译，
你在浏览器里下载编译好的固件。

为什么这条路可行：上游仓库 `https://github.com/c834606877/padavan-arm` **把 1.6GB 的 aarch64
交叉工具链一起提交在仓库里**（不是 Git LFS），并且自带 `.github/workflows/CI.yml`。
所以 **fork 之后 CI 就能直接编译**——`fork` 是 GitHub 服务器端复制的，你本地不需要上传工具链。

---

## 步骤

### 1. Fork 上游仓库

打开 <https://github.com/c834606877/padavan-arm> → 右上角 **Fork** → **Create fork**。

> ⚠️ 一定要 **fork**，不要新建空仓库：这个工具链有 1.6GB，从本地上传会非常痛苦，
> 而 fork 是服务器端复制，一秒完成。

### 2. 把本文件夹里的改动上传到你的 fork

本文件夹 **就是仓库的目录结构**（`trunk/...`、`.github/...`、根目录文件）。
在 fork 页面点 **Add file → Upload files**，然后把本文件夹里的
`trunk`、`.github`、`README.AX3000T.md`、`build_ax3000t.sh` 一起拖进去
（GitHub 的上传支持拖文件夹并**保留目录结构**），提交信息写 `AX3000T port` 之类即可。

这样做的效果是：仓库原有的文件结构不动，只是把 AX3000T 相关的新文件加上、
把 12 个已有文件替换成已适配的版本。

### 3. 在 fork 里启用 Actions

进 fork 的 **Actions** 标签页。如果看到
"Workflows aren't being run on this forked repository"，
点 **I understand my workflows, go ahead and enable them**（fork 默认不自动跑 workflow）。

### 4. 跑一次构建

**Actions** → 左侧选 **CI** → 右侧 **Run workflow** → 分支选 `main` → **Run workflow**。

我给的 `CI.yml` 已经把构建矩阵改成**只编 `AX3000T`**（上游默认编 QEMU + 两个 RAX3000M，
没必要等）。整个编译大约 **20~40 分钟**（免费 runner）。

### 5. 下载固件

构建完成后点进那次 run，页面底部 **Artifacts** → 下载 `images_AX3000T_<短哈希>`（7z 压缩包）。
解压得到：

| 文件 | 用途 |
| --- | --- |
| `fit_xiaomi_ax3000t-ubootmod_<日期>_<rev>.itb` | **裸 FIT**：第一次刷机用这个走 TFTP（见 README.AX3000T.md 6.2） |
| `sysupgrade_xiaomi_ax3000t-ubootmod_<日期>_<rev>.bin` | padavan 风格升级包：以后在 WebUI 里升级用 |

### 6. 如果编译失败

run 页面底部还有一个 artifact 叫 **`failure-logs`**，里面是 `trunk/build.log`。
把里面**第一处 `error:`**（连同上面 5~10 行）贴给我，我改完再让你重跑一次。

我这是手写但**没编译过**的代码，第一次编译大概率还有一两个小错（某个头文件/宏之类），
这是正常的，不是方案有问题。

---

## 注意事项

- 本文件夹里「修改过的文件」是**整份文件**，不是 patch。你的本地副本是上游 8 月 17 日的 HEAD，
  和上游 main 基本一致，所以直接覆盖不会丢东西。但如果上游 main 之后又改过同一个文件，
  上传会覆盖那部分更新——真遇到冲突，把冲突文件告诉我，我重新基于最新版给你一份。
- 如果第 4 步报错说找不到工具链（极少数情况：fork/镜像策略会裁掉大目录），
  告诉我，我换成「本地 WSL2 编译」方案。
- 免费 runner 单次任务上限 6 小时，我们的构建远低于这个值；但如果你同时想看上游那几个
  机型的构建结果，token 消耗（Actions 分钟数）会成倍增加，建议就先只编 AX3000T。

## 另一条路：本机 WSL2（不依赖 GitHub）

如果你的网络访问 GitHub 不方便，或者你想在本机反复快速迭代，就用 WSL2：
`wsl --install -d Ubuntu` → 把仓库拷进 Linux 文件系统（**不要在 `/mnt/d` 下编译**）→
`cd padavan-arm && ./build_ax3000t.sh`。完整步骤见 `README.AX3000T.md` 的 5.0 节。
