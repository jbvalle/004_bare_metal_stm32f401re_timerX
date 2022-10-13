#include <stdint.h>

extern uint32_t __etext;
extern uint32_t __sdata;
extern uint32_t __edata;
extern uint32_t __sbss;
extern uint32_t __ebss;
extern uint32_t __estack;

/** Handler Prototypes **/
extern int main(void);

void Reset_handler          (void);
void NMI_handler            (void)__attribute__((weak, alias("Default_handler")));
void HardFault_handler      (void)__attribute__((weak, alias("Default_handler")));
void MemManage_handler      (void)__attribute__((weak, alias("Default_handler")));
void BusFault_handler       (void)__attribute__((weak, alias("Default_handler")));
void UsuageFault_handler    (void)__attribute__((weak, alias("Default_handler")));
void SVCall_handler         (void)__attribute__((weak, alias("Default_handler")));
void DebugMonitor_handler   (void)__attribute__((weak, alias("Default_handler")));
void PendSV_handler         (void)__attribute__((weak, alias("Default_handler")));
void Systick_handler        (void)__attribute__((weak, alias("Default_handler")));
void WWDG_handler                 (void)__attribute__((weak, alias("Default_handler")));
void EXITI16_PVD__handler         (void)__attribute__((weak, alias("Default_handler")));
void EXITI21_TAMP_STAMP_handler   (void)__attribute__((weak, alias("Default_handler")));
void EXITI22_RTC_WKUP_handler     (void)__attribute__((weak, alias("Default_handler")));
void FLASH_handler                (void)__attribute__((weak, alias("Default_handler")));
void RCC_handler                  (void)__attribute__((weak, alias("Default_handler")));
void EXTI0_handler                (void)__attribute__((weak, alias("Default_handler")));
void EXTI1_handler                (void)__attribute__((weak, alias("Default_handler")));
void EXTI2_handler                (void)__attribute__((weak, alias("Default_handler")));
void EXTI3_handler                (void)__attribute__((weak, alias("Default_handler")));
void EXTI4_handler                (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream0_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream1_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream2_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream3_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream4_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream5_handler         (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream6_handler         (void)__attribute__((weak, alias("Default_handler")));
void ADC_handler                  (void)__attribute__((weak, alias("Default_handler")));
void EXTI9_5__handler             (void)__attribute__((weak, alias("Default_handler")));
void TIM1_BRK_TIM9_handler        (void)__attribute__((weak, alias("Default_handler")));
void TIM1_UP_TIM10_handler        (void)__attribute__((weak, alias("Default_handler")));
void TIM1_TRG_COM_TIM11_handler   (void)__attribute__((weak, alias("Default_handler")));
void TIM1_CC_handler              (void)__attribute__((weak, alias("Default_handler")));
void TIM2_handler                 (void)__attribute__((weak, alias("Default_handler")));
void TIM3_handler                 (void)__attribute__((weak, alias("Default_handler")));
void TIM4_handler                 (void)__attribute__((weak, alias("Default_handler")));
void I2C1_EV_handler              (void)__attribute__((weak, alias("Default_handler")));
void I2C1_ER_handler              (void)__attribute__((weak, alias("Default_handler")));
void I2C2_EV_handler              (void)__attribute__((weak, alias("Default_handler")));
void I2C2_ER_handler              (void)__attribute__((weak, alias("Default_handler")));
void SPI1_handler                 (void)__attribute__((weak, alias("Default_handler")));
void SPI2_handler                 (void)__attribute__((weak, alias("Default_handler")));
void UART1_handler                (void)__attribute__((weak, alias("Default_handler")));
void UART2_handler                (void)__attribute__((weak, alias("Default_handler")));
void EXTI15_10_handler            (void)__attribute__((weak, alias("Default_handler")));
void EXTI17_RTC_Alarm_handler     (void)__attribute__((weak, alias("Default_handler")));
void EXTI18_OTG_FS_WKUP_handler   (void)__attribute__((weak, alias("Default_handler")));
void DMA1_Stream7_handler         (void)__attribute__((weak, alias("Default_handler")));
void SDIO_handler                 (void)__attribute__((weak, alias("Default_handler")));
void TIM5_handler                 (void)__attribute__((weak, alias("Default_handler")));
void SPI3_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream0_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream1_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream2_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream3_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream4_handler                 (void)__attribute__((weak, alias("Default_handler")));
void OTG_FS_handler                       (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream5_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream6_handler                 (void)__attribute__((weak, alias("Default_handler")));
void DMA2_Stream7_handler                 (void)__attribute__((weak, alias("Default_handler")));
void UART6_handler                        (void)__attribute__((weak, alias("Default_handler")));
void I2C3_EV_handler                      (void)__attribute__((weak, alias("Default_handler")));
void I2C3_ER_handler                      (void)__attribute__((weak, alias("Default_handler")));
void FPU_handler                          (void)__attribute__((weak, alias("Default_handler")));
void SPI4_handler                         (void)__attribute__((weak, alias("Default_handler")));

/** Initialize Interrupt Vector **/
__attribute__ ((section(".isr_vector")))
void (* const fpn_isr_vector[])(void) = {
    (void (*)(void))(&__estack),
    Reset_handler,
    NMI_handler,
    HardFault_handler,
    MemManage_handler,
    BusFault_handler,
    UsuageFault_handler,
    0,
    0,
    0,
    0,
    SVCall_handler,
    DebugMonitor_handler,
    0,
    PendSV_handler,
    Systick_handler,
    WWDG_handler,
    EXITI16_PVD__handler,
    EXITI21_TAMP_STAMP_handler,
    EXITI22_RTC_WKUP_handler,
    FLASH_handler,
    RCC_handler,
    EXTI0_handler,
    EXTI1_handler,
    EXTI2_handler,
    EXTI3_handler,
    EXTI4_handler,
    DMA1_Stream0_handler,
    DMA1_Stream1_handler,
    DMA1_Stream2_handler,
    DMA1_Stream3_handler,
    DMA1_Stream4_handler,
    DMA1_Stream5_handler,
    DMA1_Stream6_handler,
    ADC_handler,
    EXTI9_5__handler,
    TIM1_BRK_TIM9_handler,
    TIM1_UP_TIM10_handler,
    TIM1_TRG_COM_TIM11_handler,
    TIM2_handler,
    TIM3_handler,
    TIM4_handler,
    I2C1_EV_handler,
    I2C1_ER_handler,
    I2C2_EV_handler,
    I2C2_ER_handler,
    SPI1_handler,
    SPI2_handler,
    UART1_handler,
    UART2_handler,
    EXTI17_RTC_Alarm_handler,
    EXTI18_OTG_FS_WKUP_handler,
    DMA1_Stream7_handler,
    SDIO_handler,
    TIM5_handler,
    SPI3_handler,
    DMA2_Stream0_handler,
    DMA2_Stream1_handler,
    DMA2_Stream2_handler,
    DMA2_Stream3_handler,
    DMA2_Stream4_handler,
    OTG_FS_handler,
    DMA2_Stream5_handler,
    DMA2_Stream6_handler,
    DMA2_Stream7_handler,
    UART6_handler,
    I2C3_EV_handler,
    I2C3_ER_handler,
    FPU_handler,
    SPI4_handler
};

void Reset_handler(void){
    /** 1. Copy data from flash to sram **/
    uint32_t * pSrc = (uint32_t *)&__etext;
    uint32_t * pDst = (uint32_t *)&__sdata;

    uint32_t size = &__edata - &__sdata;

    for(uint32_t i = 0; i < size; i++){

        *pDst++ = *pSrc++;
    }

    /** 2. Initiate bss section with zero **/
    size = &__ebss - &__sbss;

    pDst = (uint32_t *)&__sbss;

    for(uint32_t i = 0; i < size; i++){

        *pDst++ = 0;
    }

    /** 3. Call main() **/
    main();
}

void Default_handler(void){
    for(;;);
}
