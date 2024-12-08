/* Generated automatically from machmode.def and config/aarch64/aarch64-modes.def
   by genmodes.  */

#include "bconfig.h"
#include "system.h"
#include "coretypes.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCFP",
  "CCFPE",
  "CC_SWP",
  "CC_NZC",
  "CC_NZ",
  "CC_Z",
  "CC_C",
  "CC_ADC",
  "CC_V",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "OI",
  "CI",
  "XI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "HF",
  "BF",
  "SF",
  "DF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "COI",
  "CCI",
  "CXI",
  "BC",
  "HC",
  "SC",
  "DC",
  "TC",
  "VNx16BI",
  "VNx8BI",
  "VNx4BI",
  "VNx2BI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "VNx16QI",
  "VNx8HI",
  "VNx4SI",
  "VNx2DI",
  "VNx2QI",
  "VNx4QI",
  "VNx2HI",
  "VNx8QI",
  "VNx4HI",
  "VNx2SI",
  "V2x8QI",
  "V3x8QI",
  "V4x8QI",
  "V2x4HI",
  "V3x4HI",
  "V4x4HI",
  "V2x2SI",
  "V3x2SI",
  "V4x2SI",
  "V2x1DI",
  "V3x1DI",
  "V4x1DI",
  "V2x16QI",
  "V3x16QI",
  "V4x16QI",
  "V2x8HI",
  "V3x8HI",
  "V4x8HI",
  "V2x4SI",
  "V3x4SI",
  "V4x4SI",
  "V2x2DI",
  "V3x2DI",
  "V4x2DI",
  "VNx32QI",
  "VNx16HI",
  "VNx8SI",
  "VNx4DI",
  "VNx2TI",
  "VNx48QI",
  "VNx24HI",
  "VNx12SI",
  "VNx6DI",
  "VNx3TI",
  "VNx64QI",
  "VNx32HI",
  "VNx16SI",
  "VNx8DI",
  "VNx4TI",
  "VNx2OI",
  "V8DI",
  "V2HF",
  "V4BF",
  "V4HF",
  "V2SF",
  "V1DF",
  "V8BF",
  "V8HF",
  "V4SF",
  "V2DF",
  "VNx8BF",
  "VNx8HF",
  "VNx4SF",
  "VNx2DF",
  "VNx2BF",
  "VNx2HF",
  "VNx4BF",
  "VNx4HF",
  "VNx2SF",
  "V2x4BF",
  "V2x4HF",
  "V3x4BF",
  "V3x4HF",
  "V4x4BF",
  "V4x4HF",
  "V2x2SF",
  "V3x2SF",
  "V4x2SF",
  "V2x1DF",
  "V3x1DF",
  "V4x1DF",
  "V2x8BF",
  "V2x8HF",
  "V3x8BF",
  "V3x8HF",
  "V4x8BF",
  "V4x8HF",
  "V2x4SF",
  "V3x4SF",
  "V4x4SF",
  "V2x2DF",
  "V3x2DF",
  "V4x2DF",
  "VNx16BF",
  "VNx16HF",
  "VNx8SF",
  "VNx4DF",
  "VNx24BF",
  "VNx24HF",
  "VNx12SF",
  "VNx6DF",
  "VNx32BF",
  "VNx32HF",
  "VNx16SF",
  "VNx8DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCFP */
  MODE_CC,                 /* CCFPE */
  MODE_CC,                 /* CC_SWP */
  MODE_CC,                 /* CC_NZC */
  MODE_CC,                 /* CC_NZ */
  MODE_CC,                 /* CC_Z */
  MODE_CC,                 /* CC_C */
  MODE_CC,                 /* CC_ADC */
  MODE_CC,                 /* CC_V */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_INT,                /* OI */
  MODE_INT,                /* CI */
  MODE_INT,                /* XI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* HF */
  MODE_FLOAT,              /* BF */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_INT,        /* COI */
  MODE_COMPLEX_INT,        /* CCI */
  MODE_COMPLEX_INT,        /* CXI */
  MODE_COMPLEX_FLOAT,      /* BC */
  MODE_COMPLEX_FLOAT,      /* HC */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_BOOL,        /* VNx16BI */
  MODE_VECTOR_BOOL,        /* VNx8BI */
  MODE_VECTOR_BOOL,        /* VNx4BI */
  MODE_VECTOR_BOOL,        /* VNx2BI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* VNx16QI */
  MODE_VECTOR_INT,         /* VNx8HI */
  MODE_VECTOR_INT,         /* VNx4SI */
  MODE_VECTOR_INT,         /* VNx2DI */
  MODE_VECTOR_INT,         /* VNx2QI */
  MODE_VECTOR_INT,         /* VNx4QI */
  MODE_VECTOR_INT,         /* VNx2HI */
  MODE_VECTOR_INT,         /* VNx8QI */
  MODE_VECTOR_INT,         /* VNx4HI */
  MODE_VECTOR_INT,         /* VNx2SI */
  MODE_VECTOR_INT,         /* V2x8QI */
  MODE_VECTOR_INT,         /* V3x8QI */
  MODE_VECTOR_INT,         /* V4x8QI */
  MODE_VECTOR_INT,         /* V2x4HI */
  MODE_VECTOR_INT,         /* V3x4HI */
  MODE_VECTOR_INT,         /* V4x4HI */
  MODE_VECTOR_INT,         /* V2x2SI */
  MODE_VECTOR_INT,         /* V3x2SI */
  MODE_VECTOR_INT,         /* V4x2SI */
  MODE_VECTOR_INT,         /* V2x1DI */
  MODE_VECTOR_INT,         /* V3x1DI */
  MODE_VECTOR_INT,         /* V4x1DI */
  MODE_VECTOR_INT,         /* V2x16QI */
  MODE_VECTOR_INT,         /* V3x16QI */
  MODE_VECTOR_INT,         /* V4x16QI */
  MODE_VECTOR_INT,         /* V2x8HI */
  MODE_VECTOR_INT,         /* V3x8HI */
  MODE_VECTOR_INT,         /* V4x8HI */
  MODE_VECTOR_INT,         /* V2x4SI */
  MODE_VECTOR_INT,         /* V3x4SI */
  MODE_VECTOR_INT,         /* V4x4SI */
  MODE_VECTOR_INT,         /* V2x2DI */
  MODE_VECTOR_INT,         /* V3x2DI */
  MODE_VECTOR_INT,         /* V4x2DI */
  MODE_VECTOR_INT,         /* VNx32QI */
  MODE_VECTOR_INT,         /* VNx16HI */
  MODE_VECTOR_INT,         /* VNx8SI */
  MODE_VECTOR_INT,         /* VNx4DI */
  MODE_VECTOR_INT,         /* VNx2TI */
  MODE_VECTOR_INT,         /* VNx48QI */
  MODE_VECTOR_INT,         /* VNx24HI */
  MODE_VECTOR_INT,         /* VNx12SI */
  MODE_VECTOR_INT,         /* VNx6DI */
  MODE_VECTOR_INT,         /* VNx3TI */
  MODE_VECTOR_INT,         /* VNx64QI */
  MODE_VECTOR_INT,         /* VNx32HI */
  MODE_VECTOR_INT,         /* VNx16SI */
  MODE_VECTOR_INT,         /* VNx8DI */
  MODE_VECTOR_INT,         /* VNx4TI */
  MODE_VECTOR_INT,         /* VNx2OI */
  MODE_VECTOR_INT,         /* V8DI */
  MODE_VECTOR_FLOAT,       /* V2HF */
  MODE_VECTOR_FLOAT,       /* V4BF */
  MODE_VECTOR_FLOAT,       /* V4HF */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V1DF */
  MODE_VECTOR_FLOAT,       /* V8BF */
  MODE_VECTOR_FLOAT,       /* V8HF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* VNx8BF */
  MODE_VECTOR_FLOAT,       /* VNx8HF */
  MODE_VECTOR_FLOAT,       /* VNx4SF */
  MODE_VECTOR_FLOAT,       /* VNx2DF */
  MODE_VECTOR_FLOAT,       /* VNx2BF */
  MODE_VECTOR_FLOAT,       /* VNx2HF */
  MODE_VECTOR_FLOAT,       /* VNx4BF */
  MODE_VECTOR_FLOAT,       /* VNx4HF */
  MODE_VECTOR_FLOAT,       /* VNx2SF */
  MODE_VECTOR_FLOAT,       /* V2x4BF */
  MODE_VECTOR_FLOAT,       /* V2x4HF */
  MODE_VECTOR_FLOAT,       /* V3x4BF */
  MODE_VECTOR_FLOAT,       /* V3x4HF */
  MODE_VECTOR_FLOAT,       /* V4x4BF */
  MODE_VECTOR_FLOAT,       /* V4x4HF */
  MODE_VECTOR_FLOAT,       /* V2x2SF */
  MODE_VECTOR_FLOAT,       /* V3x2SF */
  MODE_VECTOR_FLOAT,       /* V4x2SF */
  MODE_VECTOR_FLOAT,       /* V2x1DF */
  MODE_VECTOR_FLOAT,       /* V3x1DF */
  MODE_VECTOR_FLOAT,       /* V4x1DF */
  MODE_VECTOR_FLOAT,       /* V2x8BF */
  MODE_VECTOR_FLOAT,       /* V2x8HF */
  MODE_VECTOR_FLOAT,       /* V3x8BF */
  MODE_VECTOR_FLOAT,       /* V3x8HF */
  MODE_VECTOR_FLOAT,       /* V4x8BF */
  MODE_VECTOR_FLOAT,       /* V4x8HF */
  MODE_VECTOR_FLOAT,       /* V2x4SF */
  MODE_VECTOR_FLOAT,       /* V3x4SF */
  MODE_VECTOR_FLOAT,       /* V4x4SF */
  MODE_VECTOR_FLOAT,       /* V2x2DF */
  MODE_VECTOR_FLOAT,       /* V3x2DF */
  MODE_VECTOR_FLOAT,       /* V4x2DF */
  MODE_VECTOR_FLOAT,       /* VNx16BF */
  MODE_VECTOR_FLOAT,       /* VNx16HF */
  MODE_VECTOR_FLOAT,       /* VNx8SF */
  MODE_VECTOR_FLOAT,       /* VNx4DF */
  MODE_VECTOR_FLOAT,       /* VNx24BF */
  MODE_VECTOR_FLOAT,       /* VNx24HF */
  MODE_VECTOR_FLOAT,       /* VNx12SF */
  MODE_VECTOR_FLOAT,       /* VNx6DF */
  MODE_VECTOR_FLOAT,       /* VNx32BF */
  MODE_VECTOR_FLOAT,       /* VNx32HF */
  MODE_VECTOR_FLOAT,       /* VNx16SF */
  MODE_VECTOR_FLOAT,       /* VNx8DF */
};

poly_uint16_pod mode_nunits[NUM_MACHINE_MODES] = 
{
  { 0, 0 },                /* VOID */
  { 0, 0 },                /* BLK */
  { 1, 0 },                /* CC */
  { 1, 0 },                /* CCFP */
  { 1, 0 },                /* CCFPE */
  { 1, 0 },                /* CC_SWP */
  { 1, 0 },                /* CC_NZC */
  { 1, 0 },                /* CC_NZ */
  { 1, 0 },                /* CC_Z */
  { 1, 0 },                /* CC_C */
  { 1, 0 },                /* CC_ADC */
  { 1, 0 },                /* CC_V */
  { 1, 0 },                /* BI */
  { 1, 0 },                /* QI */
  { 1, 0 },                /* HI */
  { 1, 0 },                /* SI */
  { 1, 0 },                /* DI */
  { 1, 0 },                /* TI */
  { 1, 0 },                /* OI */
  { 1, 0 },                /* CI */
  { 1, 0 },                /* XI */
  { 1, 0 },                /* QQ */
  { 1, 0 },                /* HQ */
  { 1, 0 },                /* SQ */
  { 1, 0 },                /* DQ */
  { 1, 0 },                /* TQ */
  { 1, 0 },                /* UQQ */
  { 1, 0 },                /* UHQ */
  { 1, 0 },                /* USQ */
  { 1, 0 },                /* UDQ */
  { 1, 0 },                /* UTQ */
  { 1, 0 },                /* HA */
  { 1, 0 },                /* SA */
  { 1, 0 },                /* DA */
  { 1, 0 },                /* TA */
  { 1, 0 },                /* UHA */
  { 1, 0 },                /* USA */
  { 1, 0 },                /* UDA */
  { 1, 0 },                /* UTA */
  { 1, 0 },                /* HF */
  { 1, 0 },                /* BF */
  { 1, 0 },                /* SF */
  { 1, 0 },                /* DF */
  { 1, 0 },                /* TF */
  { 1, 0 },                /* SD */
  { 1, 0 },                /* DD */
  { 1, 0 },                /* TD */
  { 2, 0 },                /* CQI */
  { 2, 0 },                /* CHI */
  { 2, 0 },                /* CSI */
  { 2, 0 },                /* CDI */
  { 2, 0 },                /* CTI */
  { 2, 0 },                /* COI */
  { 2, 0 },                /* CCI */
  { 2, 0 },                /* CXI */
  { 2, 0 },                /* BC */
  { 2, 0 },                /* HC */
  { 2, 0 },                /* SC */
  { 2, 0 },                /* DC */
  { 2, 0 },                /* TC */
  { 16, 0 },               /* VNx16BI */
  { 8, 0 },                /* VNx8BI */
  { 4, 0 },                /* VNx4BI */
  { 2, 0 },                /* VNx2BI */
  { 8, 0 },                /* V8QI */
  { 4, 0 },                /* V4HI */
  { 2, 0 },                /* V2SI */
  { 16, 0 },               /* V16QI */
  { 8, 0 },                /* V8HI */
  { 4, 0 },                /* V4SI */
  { 2, 0 },                /* V2DI */
  { 16, 0 },               /* VNx16QI */
  { 8, 0 },                /* VNx8HI */
  { 4, 0 },                /* VNx4SI */
  { 2, 0 },                /* VNx2DI */
  { 2, 0 },                /* VNx2QI */
  { 4, 0 },                /* VNx4QI */
  { 2, 0 },                /* VNx2HI */
  { 8, 0 },                /* VNx8QI */
  { 4, 0 },                /* VNx4HI */
  { 2, 0 },                /* VNx2SI */
  { 8, 0 },                /* V2x8QI */
  { 8, 0 },                /* V3x8QI */
  { 8, 0 },                /* V4x8QI */
  { 4, 0 },                /* V2x4HI */
  { 4, 0 },                /* V3x4HI */
  { 4, 0 },                /* V4x4HI */
  { 2, 0 },                /* V2x2SI */
  { 2, 0 },                /* V3x2SI */
  { 2, 0 },                /* V4x2SI */
  { 1, 0 },                /* V2x1DI */
  { 1, 0 },                /* V3x1DI */
  { 1, 0 },                /* V4x1DI */
  { 16, 0 },               /* V2x16QI */
  { 16, 0 },               /* V3x16QI */
  { 16, 0 },               /* V4x16QI */
  { 8, 0 },                /* V2x8HI */
  { 8, 0 },                /* V3x8HI */
  { 8, 0 },                /* V4x8HI */
  { 4, 0 },                /* V2x4SI */
  { 4, 0 },                /* V3x4SI */
  { 4, 0 },                /* V4x4SI */
  { 2, 0 },                /* V2x2DI */
  { 2, 0 },                /* V3x2DI */
  { 2, 0 },                /* V4x2DI */
  { 32, 0 },               /* VNx32QI */
  { 16, 0 },               /* VNx16HI */
  { 8, 0 },                /* VNx8SI */
  { 4, 0 },                /* VNx4DI */
  { 2, 0 },                /* VNx2TI */
  { 48, 0 },               /* VNx48QI */
  { 24, 0 },               /* VNx24HI */
  { 12, 0 },               /* VNx12SI */
  { 6, 0 },                /* VNx6DI */
  { 3, 0 },                /* VNx3TI */
  { 64, 0 },               /* VNx64QI */
  { 32, 0 },               /* VNx32HI */
  { 16, 0 },               /* VNx16SI */
  { 8, 0 },                /* VNx8DI */
  { 4, 0 },                /* VNx4TI */
  { 2, 0 },                /* VNx2OI */
  { 8, 0 },                /* V8DI */
  { 2, 0 },                /* V2HF */
  { 4, 0 },                /* V4BF */
  { 4, 0 },                /* V4HF */
  { 2, 0 },                /* V2SF */
  { 1, 0 },                /* V1DF */
  { 8, 0 },                /* V8BF */
  { 8, 0 },                /* V8HF */
  { 4, 0 },                /* V4SF */
  { 2, 0 },                /* V2DF */
  { 8, 0 },                /* VNx8BF */
  { 8, 0 },                /* VNx8HF */
  { 4, 0 },                /* VNx4SF */
  { 2, 0 },                /* VNx2DF */
  { 2, 0 },                /* VNx2BF */
  { 2, 0 },                /* VNx2HF */
  { 4, 0 },                /* VNx4BF */
  { 4, 0 },                /* VNx4HF */
  { 2, 0 },                /* VNx2SF */
  { 4, 0 },                /* V2x4BF */
  { 4, 0 },                /* V2x4HF */
  { 4, 0 },                /* V3x4BF */
  { 4, 0 },                /* V3x4HF */
  { 4, 0 },                /* V4x4BF */
  { 4, 0 },                /* V4x4HF */
  { 2, 0 },                /* V2x2SF */
  { 2, 0 },                /* V3x2SF */
  { 2, 0 },                /* V4x2SF */
  { 1, 0 },                /* V2x1DF */
  { 1, 0 },                /* V3x1DF */
  { 1, 0 },                /* V4x1DF */
  { 8, 0 },                /* V2x8BF */
  { 8, 0 },                /* V2x8HF */
  { 8, 0 },                /* V3x8BF */
  { 8, 0 },                /* V3x8HF */
  { 8, 0 },                /* V4x8BF */
  { 8, 0 },                /* V4x8HF */
  { 4, 0 },                /* V2x4SF */
  { 4, 0 },                /* V3x4SF */
  { 4, 0 },                /* V4x4SF */
  { 2, 0 },                /* V2x2DF */
  { 2, 0 },                /* V3x2DF */
  { 2, 0 },                /* V4x2DF */
  { 16, 0 },               /* VNx16BF */
  { 16, 0 },               /* VNx16HF */
  { 8, 0 },                /* VNx8SF */
  { 4, 0 },                /* VNx4DF */
  { 24, 0 },               /* VNx24BF */
  { 24, 0 },               /* VNx24HF */
  { 12, 0 },               /* VNx12SF */
  { 6, 0 },                /* VNx6DF */
  { 32, 0 },               /* VNx32BF */
  { 32, 0 },               /* VNx32HF */
  { 16, 0 },               /* VNx16SF */
  { 8, 0 },                /* VNx8DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* CCFPE */
  E_VOIDmode,              /* CC_SWP */
  E_VOIDmode,              /* CC_NZC */
  E_VOIDmode,              /* CC_NZ */
  E_VOIDmode,              /* CC_Z */
  E_VOIDmode,              /* CC_C */
  E_VOIDmode,              /* CC_ADC */
  E_VOIDmode,              /* CC_V */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_CImode,                /* OI */
  E_XImode,                /* CI */
  E_VOIDmode,              /* XI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_BFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_CCImode,               /* COI */
  E_CXImode,               /* CCI */
  E_VOIDmode,              /* CXI */
  E_HCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_VNx8BImode,            /* VNx16BI */
  E_VNx4BImode,            /* VNx8BI */
  E_VNx2BImode,            /* VNx4BI */
  E_VOIDmode,              /* VNx2BI */
  E_V4HImode,              /* V8QI */
  E_V2SImode,              /* V4HI */
  E_V16QImode,             /* V2SI */
  E_V8HImode,              /* V16QI */
  E_V4SImode,              /* V8HI */
  E_V2DImode,              /* V4SI */
  E_VNx16QImode,           /* V2DI */
  E_VNx8HImode,            /* VNx16QI */
  E_VNx4SImode,            /* VNx8HI */
  E_VNx2DImode,            /* VNx4SI */
  E_VNx2QImode,            /* VNx2DI */
  E_VNx4QImode,            /* VNx2QI */
  E_VNx2HImode,            /* VNx4QI */
  E_VNx8QImode,            /* VNx2HI */
  E_VNx4HImode,            /* VNx8QI */
  E_VNx2SImode,            /* VNx4HI */
  E_V2x8QImode,            /* VNx2SI */
  E_V3x8QImode,            /* V2x8QI */
  E_V4x8QImode,            /* V3x8QI */
  E_V2x4HImode,            /* V4x8QI */
  E_V3x4HImode,            /* V2x4HI */
  E_V4x4HImode,            /* V3x4HI */
  E_V2x2SImode,            /* V4x4HI */
  E_V3x2SImode,            /* V2x2SI */
  E_V4x2SImode,            /* V3x2SI */
  E_V2x1DImode,            /* V4x2SI */
  E_V3x1DImode,            /* V2x1DI */
  E_V4x1DImode,            /* V3x1DI */
  E_V2x16QImode,           /* V4x1DI */
  E_V3x16QImode,           /* V2x16QI */
  E_V4x16QImode,           /* V3x16QI */
  E_V2x8HImode,            /* V4x16QI */
  E_V3x8HImode,            /* V2x8HI */
  E_V4x8HImode,            /* V3x8HI */
  E_V2x4SImode,            /* V4x8HI */
  E_V3x4SImode,            /* V2x4SI */
  E_V4x4SImode,            /* V3x4SI */
  E_V2x2DImode,            /* V4x4SI */
  E_V3x2DImode,            /* V2x2DI */
  E_V4x2DImode,            /* V3x2DI */
  E_VNx32QImode,           /* V4x2DI */
  E_VNx16HImode,           /* VNx32QI */
  E_VNx8SImode,            /* VNx16HI */
  E_VNx4DImode,            /* VNx8SI */
  E_VNx2TImode,            /* VNx4DI */
  E_VNx48QImode,           /* VNx2TI */
  E_VNx24HImode,           /* VNx48QI */
  E_VNx12SImode,           /* VNx24HI */
  E_VNx6DImode,            /* VNx12SI */
  E_VNx3TImode,            /* VNx6DI */
  E_VNx64QImode,           /* VNx3TI */
  E_VNx32HImode,           /* VNx64QI */
  E_VNx16SImode,           /* VNx32HI */
  E_VNx8DImode,            /* VNx16SI */
  E_VNx4TImode,            /* VNx8DI */
  E_VNx2OImode,            /* VNx4TI */
  E_V8DImode,              /* VNx2OI */
  E_VOIDmode,              /* V8DI */
  E_V4BFmode,              /* V2HF */
  E_V4HFmode,              /* V4BF */
  E_V2SFmode,              /* V4HF */
  E_V1DFmode,              /* V2SF */
  E_V8BFmode,              /* V1DF */
  E_V8HFmode,              /* V8BF */
  E_V4SFmode,              /* V8HF */
  E_V2DFmode,              /* V4SF */
  E_VNx8BFmode,            /* V2DF */
  E_VNx8HFmode,            /* VNx8BF */
  E_VNx4SFmode,            /* VNx8HF */
  E_VNx2DFmode,            /* VNx4SF */
  E_VNx2BFmode,            /* VNx2DF */
  E_VNx2HFmode,            /* VNx2BF */
  E_VNx4BFmode,            /* VNx2HF */
  E_VNx4HFmode,            /* VNx4BF */
  E_VNx2SFmode,            /* VNx4HF */
  E_V2x4BFmode,            /* VNx2SF */
  E_V2x4HFmode,            /* V2x4BF */
  E_V3x4BFmode,            /* V2x4HF */
  E_V3x4HFmode,            /* V3x4BF */
  E_V4x4BFmode,            /* V3x4HF */
  E_V4x4HFmode,            /* V4x4BF */
  E_V2x2SFmode,            /* V4x4HF */
  E_V3x2SFmode,            /* V2x2SF */
  E_V4x2SFmode,            /* V3x2SF */
  E_V2x1DFmode,            /* V4x2SF */
  E_V3x1DFmode,            /* V2x1DF */
  E_V4x1DFmode,            /* V3x1DF */
  E_V2x8BFmode,            /* V4x1DF */
  E_V2x8HFmode,            /* V2x8BF */
  E_V3x8BFmode,            /* V2x8HF */
  E_V3x8HFmode,            /* V3x8BF */
  E_V4x8BFmode,            /* V3x8HF */
  E_V4x8HFmode,            /* V4x8BF */
  E_V2x4SFmode,            /* V4x8HF */
  E_V3x4SFmode,            /* V2x4SF */
  E_V4x4SFmode,            /* V3x4SF */
  E_V2x2DFmode,            /* V4x4SF */
  E_V3x2DFmode,            /* V2x2DF */
  E_V4x2DFmode,            /* V3x2DF */
  E_VNx16BFmode,           /* V4x2DF */
  E_VNx16HFmode,           /* VNx16BF */
  E_VNx8SFmode,            /* VNx16HF */
  E_VNx4DFmode,            /* VNx8SF */
  E_VNx24BFmode,           /* VNx4DF */
  E_VNx24HFmode,           /* VNx24BF */
  E_VNx12SFmode,           /* VNx24HF */
  E_VNx6DFmode,            /* VNx12SF */
  E_VNx32BFmode,           /* VNx6DF */
  E_VNx32HFmode,           /* VNx32BF */
  E_VNx16SFmode,           /* VNx32HF */
  E_VNx8DFmode,            /* VNx16SF */
  E_VOIDmode,              /* VNx8DF */
};

const unsigned char mode_2xwider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* CCFPE */
  E_VOIDmode,              /* CC_SWP */
  E_VOIDmode,              /* CC_NZC */
  E_VOIDmode,              /* CC_NZ */
  E_VOIDmode,              /* CC_Z */
  E_VOIDmode,              /* CC_C */
  E_VOIDmode,              /* CC_ADC */
  E_VOIDmode,              /* CC_V */
  E_VOIDmode,              /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_XImode,                /* OI */
  E_VOIDmode,              /* CI */
  E_VOIDmode,              /* XI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_CXImode,               /* COI */
  E_VOIDmode,              /* CCI */
  E_VOIDmode,              /* CXI */
  E_SCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* VNx16BI */
  E_VOIDmode,              /* VNx8BI */
  E_VOIDmode,              /* VNx4BI */
  E_VOIDmode,              /* VNx2BI */
  E_V16QImode,             /* V8QI */
  E_V8HImode,              /* V4HI */
  E_V4SImode,              /* V2SI */
  E_VNx32QImode,           /* V16QI */
  E_VNx16HImode,           /* V8HI */
  E_VNx8SImode,            /* V4SI */
  E_VNx4DImode,            /* V2DI */
  E_VNx32QImode,           /* VNx16QI */
  E_VNx16HImode,           /* VNx8HI */
  E_VNx8SImode,            /* VNx4SI */
  E_VNx4DImode,            /* VNx2DI */
  E_VNx4QImode,            /* VNx2QI */
  E_VNx8QImode,            /* VNx4QI */
  E_VNx4HImode,            /* VNx2HI */
  E_V2x16QImode,           /* VNx8QI */
  E_V2x8HImode,            /* VNx4HI */
  E_V2x4SImode,            /* VNx2SI */
  E_V2x16QImode,           /* V2x8QI */
  E_V2x16QImode,           /* V3x8QI */
  E_V2x16QImode,           /* V4x8QI */
  E_V2x8HImode,            /* V2x4HI */
  E_V2x8HImode,            /* V3x4HI */
  E_V2x8HImode,            /* V4x4HI */
  E_V2x4SImode,            /* V2x2SI */
  E_V2x4SImode,            /* V3x2SI */
  E_V2x4SImode,            /* V4x2SI */
  E_V2x2DImode,            /* V2x1DI */
  E_V2x2DImode,            /* V3x1DI */
  E_V2x2DImode,            /* V4x1DI */
  E_VNx32QImode,           /* V2x16QI */
  E_VNx32QImode,           /* V3x16QI */
  E_VNx32QImode,           /* V4x16QI */
  E_VNx16HImode,           /* V2x8HI */
  E_VNx16HImode,           /* V3x8HI */
  E_VNx16HImode,           /* V4x8HI */
  E_VNx8SImode,            /* V2x4SI */
  E_VNx8SImode,            /* V3x4SI */
  E_VNx8SImode,            /* V4x4SI */
  E_VNx4DImode,            /* V2x2DI */
  E_VNx4DImode,            /* V3x2DI */
  E_VNx4DImode,            /* V4x2DI */
  E_VNx64QImode,           /* VNx32QI */
  E_VNx32HImode,           /* VNx16HI */
  E_VNx16SImode,           /* VNx8SI */
  E_VNx8DImode,            /* VNx4DI */
  E_VNx4TImode,            /* VNx2TI */
  E_VOIDmode,              /* VNx48QI */
  E_VOIDmode,              /* VNx24HI */
  E_VOIDmode,              /* VNx12SI */
  E_VOIDmode,              /* VNx6DI */
  E_VOIDmode,              /* VNx3TI */
  E_VOIDmode,              /* VNx64QI */
  E_VOIDmode,              /* VNx32HI */
  E_VOIDmode,              /* VNx16SI */
  E_VOIDmode,              /* VNx8DI */
  E_VOIDmode,              /* VNx4TI */
  E_VOIDmode,              /* VNx2OI */
  E_VOIDmode,              /* V8DI */
  E_V4HFmode,              /* V2HF */
  E_V8BFmode,              /* V4BF */
  E_V8HFmode,              /* V4HF */
  E_V4SFmode,              /* V2SF */
  E_V2DFmode,              /* V1DF */
  E_VNx16BFmode,           /* V8BF */
  E_VNx16HFmode,           /* V8HF */
  E_VNx8SFmode,            /* V4SF */
  E_VNx4DFmode,            /* V2DF */
  E_VNx16BFmode,           /* VNx8BF */
  E_VNx16HFmode,           /* VNx8HF */
  E_VNx8SFmode,            /* VNx4SF */
  E_VNx4DFmode,            /* VNx2DF */
  E_VNx4BFmode,            /* VNx2BF */
  E_VNx4HFmode,            /* VNx2HF */
  E_V2x8BFmode,            /* VNx4BF */
  E_V2x8HFmode,            /* VNx4HF */
  E_V2x4SFmode,            /* VNx2SF */
  E_V2x8BFmode,            /* V2x4BF */
  E_V2x8HFmode,            /* V2x4HF */
  E_V2x8BFmode,            /* V3x4BF */
  E_V2x8HFmode,            /* V3x4HF */
  E_V2x8BFmode,            /* V4x4BF */
  E_V2x8HFmode,            /* V4x4HF */
  E_V2x4SFmode,            /* V2x2SF */
  E_V2x4SFmode,            /* V3x2SF */
  E_V2x4SFmode,            /* V4x2SF */
  E_V2x2DFmode,            /* V2x1DF */
  E_V2x2DFmode,            /* V3x1DF */
  E_V2x2DFmode,            /* V4x1DF */
  E_VNx16BFmode,           /* V2x8BF */
  E_VNx16HFmode,           /* V2x8HF */
  E_VNx16BFmode,           /* V3x8BF */
  E_VNx16HFmode,           /* V3x8HF */
  E_VNx16BFmode,           /* V4x8BF */
  E_VNx16HFmode,           /* V4x8HF */
  E_VNx8SFmode,            /* V2x4SF */
  E_VNx8SFmode,            /* V3x4SF */
  E_VNx8SFmode,            /* V4x4SF */
  E_VNx4DFmode,            /* V2x2DF */
  E_VNx4DFmode,            /* V3x2DF */
  E_VNx4DFmode,            /* V4x2DF */
  E_VNx32BFmode,           /* VNx16BF */
  E_VNx32HFmode,           /* VNx16HF */
  E_VNx16SFmode,           /* VNx8SF */
  E_VNx8DFmode,            /* VNx4DF */
  E_VOIDmode,              /* VNx24BF */
  E_VOIDmode,              /* VNx24HF */
  E_VOIDmode,              /* VNx12SF */
  E_VOIDmode,              /* VNx6DF */
  E_VOIDmode,              /* VNx32BF */
  E_VOIDmode,              /* VNx32HF */
  E_VOIDmode,              /* VNx16SF */
  E_VOIDmode,              /* VNx8DF */
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_CCmode,                /* CC */
  E_CCFPmode,              /* CCFP */
  E_CCFPEmode,             /* CCFPE */
  E_CC_SWPmode,            /* CC_SWP */
  E_CC_NZCmode,            /* CC_NZC */
  E_CC_NZmode,             /* CC_NZ */
  E_CC_Zmode,              /* CC_Z */
  E_CC_Cmode,              /* CC_C */
  E_CC_ADCmode,            /* CC_ADC */
  E_CC_Vmode,              /* CC_V */
  E_BImode,                /* BI */
  E_QImode,                /* QI */
  E_HImode,                /* HI */
  E_SImode,                /* SI */
  E_DImode,                /* DI */
  E_TImode,                /* TI */
  E_OImode,                /* OI */
  E_CImode,                /* CI */
  E_XImode,                /* XI */
  E_QQmode,                /* QQ */
  E_HQmode,                /* HQ */
  E_SQmode,                /* SQ */
  E_DQmode,                /* DQ */
  E_TQmode,                /* TQ */
  E_UQQmode,               /* UQQ */
  E_UHQmode,               /* UHQ */
  E_USQmode,               /* USQ */
  E_UDQmode,               /* UDQ */
  E_UTQmode,               /* UTQ */
  E_HAmode,                /* HA */
  E_SAmode,                /* SA */
  E_DAmode,                /* DA */
  E_TAmode,                /* TA */
  E_UHAmode,               /* UHA */
  E_USAmode,               /* USA */
  E_UDAmode,               /* UDA */
  E_UTAmode,               /* UTA */
  E_HFmode,                /* HF */
  E_BFmode,                /* BF */
  E_SFmode,                /* SF */
  E_DFmode,                /* DF */
  E_TFmode,                /* TF */
  E_SDmode,                /* SD */
  E_DDmode,                /* DD */
  E_TDmode,                /* TD */
  E_QImode,                /* CQI */
  E_HImode,                /* CHI */
  E_SImode,                /* CSI */
  E_DImode,                /* CDI */
  E_TImode,                /* CTI */
  E_OImode,                /* COI */
  E_CImode,                /* CCI */
  E_XImode,                /* CXI */
  E_BFmode,                /* BC */
  E_HFmode,                /* HC */
  E_SFmode,                /* SC */
  E_DFmode,                /* DC */
  E_TFmode,                /* TC */
  E_BImode,                /* VNx16BI */
  E_BImode,                /* VNx8BI */
  E_BImode,                /* VNx4BI */
  E_BImode,                /* VNx2BI */
  E_QImode,                /* V8QI */
  E_HImode,                /* V4HI */
  E_SImode,                /* V2SI */
  E_QImode,                /* V16QI */
  E_HImode,                /* V8HI */
  E_SImode,                /* V4SI */
  E_DImode,                /* V2DI */
  E_QImode,                /* VNx16QI */
  E_HImode,                /* VNx8HI */
  E_SImode,                /* VNx4SI */
  E_DImode,                /* VNx2DI */
  E_QImode,                /* VNx2QI */
  E_QImode,                /* VNx4QI */
  E_HImode,                /* VNx2HI */
  E_QImode,                /* VNx8QI */
  E_HImode,                /* VNx4HI */
  E_SImode,                /* VNx2SI */
  E_QImode,                /* V2x8QI */
  E_QImode,                /* V3x8QI */
  E_QImode,                /* V4x8QI */
  E_HImode,                /* V2x4HI */
  E_HImode,                /* V3x4HI */
  E_HImode,                /* V4x4HI */
  E_SImode,                /* V2x2SI */
  E_SImode,                /* V3x2SI */
  E_SImode,                /* V4x2SI */
  E_DImode,                /* V2x1DI */
  E_DImode,                /* V3x1DI */
  E_DImode,                /* V4x1DI */
  E_QImode,                /* V2x16QI */
  E_QImode,                /* V3x16QI */
  E_QImode,                /* V4x16QI */
  E_HImode,                /* V2x8HI */
  E_HImode,                /* V3x8HI */
  E_HImode,                /* V4x8HI */
  E_SImode,                /* V2x4SI */
  E_SImode,                /* V3x4SI */
  E_SImode,                /* V4x4SI */
  E_DImode,                /* V2x2DI */
  E_DImode,                /* V3x2DI */
  E_DImode,                /* V4x2DI */
  E_QImode,                /* VNx32QI */
  E_HImode,                /* VNx16HI */
  E_SImode,                /* VNx8SI */
  E_DImode,                /* VNx4DI */
  E_TImode,                /* VNx2TI */
  E_QImode,                /* VNx48QI */
  E_HImode,                /* VNx24HI */
  E_SImode,                /* VNx12SI */
  E_DImode,                /* VNx6DI */
  E_TImode,                /* VNx3TI */
  E_QImode,                /* VNx64QI */
  E_HImode,                /* VNx32HI */
  E_SImode,                /* VNx16SI */
  E_DImode,                /* VNx8DI */
  E_TImode,                /* VNx4TI */
  E_OImode,                /* VNx2OI */
  E_DImode,                /* V8DI */
  E_HFmode,                /* V2HF */
  E_BFmode,                /* V4BF */
  E_HFmode,                /* V4HF */
  E_SFmode,                /* V2SF */
  E_DFmode,                /* V1DF */
  E_BFmode,                /* V8BF */
  E_HFmode,                /* V8HF */
  E_SFmode,                /* V4SF */
  E_DFmode,                /* V2DF */
  E_BFmode,                /* VNx8BF */
  E_HFmode,                /* VNx8HF */
  E_SFmode,                /* VNx4SF */
  E_DFmode,                /* VNx2DF */
  E_BFmode,                /* VNx2BF */
  E_HFmode,                /* VNx2HF */
  E_BFmode,                /* VNx4BF */
  E_HFmode,                /* VNx4HF */
  E_SFmode,                /* VNx2SF */
  E_BFmode,                /* V2x4BF */
  E_HFmode,                /* V2x4HF */
  E_BFmode,                /* V3x4BF */
  E_HFmode,                /* V3x4HF */
  E_BFmode,                /* V4x4BF */
  E_HFmode,                /* V4x4HF */
  E_SFmode,                /* V2x2SF */
  E_SFmode,                /* V3x2SF */
  E_SFmode,                /* V4x2SF */
  E_DFmode,                /* V2x1DF */
  E_DFmode,                /* V3x1DF */
  E_DFmode,                /* V4x1DF */
  E_BFmode,                /* V2x8BF */
  E_HFmode,                /* V2x8HF */
  E_BFmode,                /* V3x8BF */
  E_HFmode,                /* V3x8HF */
  E_BFmode,                /* V4x8BF */
  E_HFmode,                /* V4x8HF */
  E_SFmode,                /* V2x4SF */
  E_SFmode,                /* V3x4SF */
  E_SFmode,                /* V4x4SF */
  E_DFmode,                /* V2x2DF */
  E_DFmode,                /* V3x2DF */
  E_DFmode,                /* V4x2DF */
  E_BFmode,                /* VNx16BF */
  E_HFmode,                /* VNx16HF */
  E_SFmode,                /* VNx8SF */
  E_DFmode,                /* VNx4DF */
  E_BFmode,                /* VNx24BF */
  E_HFmode,                /* VNx24HF */
  E_SFmode,                /* VNx12SF */
  E_DFmode,                /* VNx6DF */
  E_BFmode,                /* VNx32BF */
  E_HFmode,                /* VNx32HF */
  E_SFmode,                /* VNx16SF */
  E_DFmode,                /* VNx8DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* HF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* BC */
  MIN_MODE_VECTOR_BOOL,    /* VNx16BI */
  MIN_MODE_VECTOR_INT,     /* V8QI */
  MIN_MODE_VECTOR_FRACT,   /* VOID */
  MIN_MODE_VECTOR_UFRACT,  /* VOID */
  MIN_MODE_VECTOR_ACCUM,   /* VOID */
  MIN_MODE_VECTOR_UACCUM,  /* VOID */
  MIN_MODE_VECTOR_FLOAT,   /* V2HF */
  MIN_MODE_OPAQUE,         /* VOID */
};
