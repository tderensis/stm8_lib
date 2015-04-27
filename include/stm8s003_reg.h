/** STM8S003 register map */

// Port A
#define PA_ODR       0x5000
#define PA_IDR       0x5001
#define PA_DDR       0x5002
#define PA_CR1       0x5003
#define PA_CR2       0x5004

// Port B
#define PB_ODR       0x5005
#define PB_IDR       0x5006
#define PB_DDR       0x5007
#define PB_CR1       0x5008
#define PB_CR2       0x5009

// Port C
#define PC_ODR       0x500A
#define PC_IDR       0x500B
#define PC_DDR       0x500C
#define PC_CR1       0x500D
#define PC_CR2       0x500E

// Port D
#define PD_ODR       0x500F
#define PD_IDR       0x5010
#define PD_DDR       0x5011
#define PD_CR1       0x5012
#define PD_CR2       0x5013

// Port E
#define PE_ODR       0x5014
#define PE_IDR       0x5015
#define PE_DDR       0x5016
#define PE_CR1       0x5017
#define PE_CR2       0x5018

// Port F
#define PF_ODR       0x5019
#define PF_IDR       0x501A
#define PF_DDR       0x501B
#define PF_CR1       0x501C
#define PF_CR2       0x501D

/* Reserved          0x501E to
                     0x5059 (60 bytes) */

// Flash
#define FLASH_CR1    0x505A
#define FLASH_CR2    0x505B
#define FLASH_NCR2   0x505C
#define FLASH_FPR    0x505D
#define FLASH_NFPR   0x505E
#define FLASH_IAPSR  0x505F
/* Reserved          0x5060 to
                     0x5061 (2 bytes) */
#define FLASH_PUKR   0x5062
/* Reserved          0x5063 */
#define FLASH_DUKR   0x5064
/* Reserved          0x5065 to
                     0x509F (59 bytes) */

// ITC
#define EXTI_CR1     0x50A0
#define EXTI_CR2     0x50A1
/* Reserved          0x50A2 to
                     0x50B2 (17 bytes) */

// RST
#define RST_SR       0x50B3
/* Reserved          0x50B4 to
                     0x50BF (12 bytes) */

// CLK
#define CLK_ICKR     0x50C0
#define CLK_ECKR     0x50C1
/* Reserved          0x50C2 */
#define CLK_CMSR     0x50C3
#define CLK_SWR      0x50C4
#define CLK_SWCR     0x50C5
#define CLK_CKDIVR   0x50C6
#define CLK_PCKENR1  0x50C7
#define CLK_CSSR     0x50C8
#define CLK_CCOR     0x50C9
#define CLK_PCKENR2  0x50CA
/* Reserved          0x50CB */
#define CLK_HSITRIMR 0x50CC
#define CLK_SWIMCCR  0x50CD
/* Reserved          0x50CE to
                     0x50D0 (3 bytes) */

// WWDG
#define WWDG_CR      0x50D1
#define WWDG_WR      0x50D2
/* Reserved          0x50D3 to
                     0x50DF (13 bytes) */

// IWDG
#define IWDG_KR      0x50E0
#define IWDG_PR      0x50E1
#define IWDG_RLR     0x50E2
/* Reserved          0x50E3 to
                     0x50EF (13 bytes) */

// AWU
#define AWU_CSR1     0x50F0
#define AWU_APR      0x50F1
#define AWU_TBR      0x50F2

// BEEP
#define BEEP_CSR     0x50F3
/* Reserved          0x50F4 to
                     0x51FF (168 bytes) */

// SPI
#define SPI_CR1      0x5200
#define SPI_CR2      0x5201
#define SPI_ICR      0x5202
#define SPI_SR       0x5203
#define SPI_DR       0x5204
#define SPI_CRCPR    0x5205
#define SPI_RXCRCR   0x5206
#define SPI_TXCRCR   0x5207
/* Reserved          0x5208 to
                     0x520F (8 bytes) */

// I2C
#define I2C_CR1      0x5210
#define I2C_CR2      0x5211
#define I2C_FREQR    0x5212
#define I2C_OARL     0x5213
#define I2C_OARH     0x5214
/* Reserved          0x5215 */
#define I2C_DR       0x5216
#define I2C_SR1      0x5217
#define I2C_SR2      0x5218
#define I2C_SR3      0x5219
#define I2C_ITR      0x521A
#define I2C_CCRL     0x521B
#define I2C_CCRH     0x521C
#define I2C_TRISER   0x521D
#define I2C_PECR     0x521E
/* Reserved          0x521F to
                     0x522F (17 bytes) */

// UART 1
#define UART1_SR     0x5230
#define UART1_DR     0x5231
#define UART1_BRR1   0x5232
#define UART1_BRR2   0x5233
#define UART1_CR1    0x5234
#define UART1_CR2    0x5235
#define UART1_CR3    0x5236
#define UART1_CR4    0x5237
#define UART1_CR5    0x5238
#define UART1_GTR    0x5239
#define UART1_PSCR   0x523A
/* Reserved          0x523B to
                     0x523F (21 bytes) */

// TIM 1
#define TIM1_CR1     0x5250
#define TIM1_CR2     0x5251
#define TIM1_SMCR    0x5252
#define TIM1_ETR     0x5253
#define TIM1_IER     0x5254
#define TIM1_SR1     0x5255
#define TIM1_SR2     0x5256
#define TIM1_EGR     0x5257
#define TIM1_CCMR1   0x5258
#define TIM1_CCMR2   0x5259
#define TIM1_CCMR3   0x525A
#define TIM1_CCMR4   0x525B
#define TIM1_CCER1   0x525C
#define TIM1_CCER2   0x525D
#define TIM1_CNTRH   0x525E
#define TIM1_CNTRL   0x525F
#define TIM1_PSCRH   0x5260
#define TIM1_PSCRL   0x5261
#define TIM1_ARRH    0x5262
#define TIM1_ARRL    0x5263
#define TIM1_RCR     0x5264
#define TIM1_CCR1H   0x5265
#define TIM1_CCR1L   0x5266
#define TIM1_CCR2H   0x5267
#define TIM1_CCR2L   0x5268
#define TIM1_CCR3H   0x5269
#define TIM1_CCR3L   0x526A
#define TIM1_CCR4H   0x526B
#define TIM1_CCR4L   0x526C
#define TIM1_BKR     0x526D
#define TIM1_DTR     0x526E
#define TIM1_OISR    0x526F
/* Reserved          0x5270 to
                     0x52FF (147 bytes) */

// TIM 2
#define TIM2_CR1     0x5300
/* Reserved          0x5301 */
/* Reserved          0x5302 */
#define TIM2_IER     0x5303
#define TIM2_SR1     0x5304
#define TIM2_SR2     0x5305
#define TIM2_EGR     0x5306
#define TIM2_CCMR1   0x5307
#define TIM2_CCMR2   0x5308
#define TIM2_CCMR3   0x5309
#define TIM2_CCER1   0x530A
#define TIM2_CCER2   0x530B
#define TIM2_CNTRH   0x530C
#define TIM2_CNTRL   0x530D
#define TIM2_PSCR    0x530E
#define TIM2_ARRH    0x530F
#define TIM2_ARRL    0x5310
#define TIM2_CCR1H   0x5311
#define TIM2_CCR1L   0x5312
#define TIM2_CCR2H   0x5313
#define TIM2_CCR2L   0x5314
#define TIM2_CCR3H   0x5315
#define TIM2_CCR3L   0x5316
/* Reserved          0x5317 to
                     0x533F (43 bytes) */

// TIM 4
#define TIM4_CR1     0x5340
/* Reserved          0x5341 */
/* Reserved          0x5342 */
#define TIM4_IER     0x5343
#define TIM4_SR      0x5344
#define TIM4_EGR     0x5345
#define TIM4_CNTR    0x5346
#define TIM4_PSCR    0x5347
#define TIM4_ARR     0x5348
/* Reserved          0x5349 to
                     0x53DF (153 bytes) */

// ADC 1
#define ADC_DB1R     0x53E0
#define ADC_DB2R     0x53E1
#define ADC_DB3R     0x53E2
#define ADC_DB4R     0x53E3
#define ADC_DB5R     0x53E4
#define ADC_DB6R     0x53E5
#define ADC_DB7R     0x53E6
#define ADC_DB8R     0x53E7
#define ADC_DB9R     0x53E8
#define ADC_DB10R    0x53E9
#define ADC_DB11R    0x53EA
#define ADC_DB12R    0x53EB
#define ADC_DB13R    0x53EC
#define ADC_DB14R    0x53ED
#define ADC_DB15R    0x53EE
#define ADC_DB16R    0x53EF
#define ADC_DB17R    0x53F0
#define ADC_DB18R    0x53F1
#define ADC_DB19R    0x53F2
#define ADC_DB20R    0x53F3
/* Reserved          0x53F4 to
                     0x53FF (12 bytes) */
#define ADC_CSR      0x5400
#define ADC_CR1      0x5401
#define ADC_CR2      0x5402
#define ADC_CR3      0x5403
#define ADC_DRH      0x5404
#define ADC_DRL      0x5405
#define ADC_TDRH     0x5406
#define ADC_TDRL     0x5407
#define ADC_HTRH     0x5408
#define ADC_HTRL     0x5409
#define ADC_LTRH     0x540A
#define ADC_LTRL     0x540B
#define ADC_AWSRH    0x540C
#define ADC_AWSRL    0x540D
#define ADC_AWCRH    0x540E
#define ADC_AWCRL    0x540F
/* Reserved          0x5410 to
                     0x57FF (1008 bytes) */


/* CPU/SWIM/debug module/interrupt controller registers */

// CPU
#define CPU_A        0x7F00
#define CPU_PCE      0x7F01
#define CPU_PCH      0x7F02
#define CPU_PCL      0x7F03
#define CPU_XH       0x7F04
#define CPU_XL       0x7F05
#define CPU_YH       0x7F06
#define CPU_YL       0x7F07
#define CPU_SPH      0x7F08
#define CPU_SPL      0x7F09
#define CPU_CCR      0x7F0A
/* Reserved          0x7F0B to
                     0x7F5F (85 bytes) */
#define CPU_GCR      0x7F60
/* Reserved          0x7F61 to
                     0x7F6F (16 bytes) */

// ITC
#define ITC_SPR1     0x7F70
#define ITC_SPR2     0x7F71
#define ITC_SPR3     0x7F72
#define ITC_SPR4     0x7F73
#define ITC_SPR5     0x7F74
#define ITC_SPR6     0x7F75
#define ITC_SPR7     0x7F76
#define ITC_SPR8     0x7F77
/* Reserved          0x7F78 to
                     0x7F7F (8 bytes) */

// SWIM
#define SWIM_CSR     0x7F80
/* Reserved          0x7F81 to
                     0x7F8F (15 bytes) */

// DM
#define DM_BK1RE     0x7F90
#define DM_BK1RH     0x7F91
#define DM_BK1RL     0x7F92
#define DM_BK2RE     0x7F93
#define DM_BK2RH     0x7F94
#define DM_BK2RL     0x7F95
#define DM_CR1       0x7F96
#define DM_CR2       0x7F97
#define DM_CSR1      0x7F98
#define DM_CSR2      0x7F99
#define DM_ENFCTR    0x7F9A
/* Reserved          0x7F9B to
                     0x7F9F (5 bytes) */

