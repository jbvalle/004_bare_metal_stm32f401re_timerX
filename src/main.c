#include <stdint.h>
#include "peripherals.h"

RCC_t   * const RCC     =   (RCC_t *)   0x40023800;
GPIOx_t * const GPIOA   =   (GPIOx_t *) 0x40020000;
TIMx_t  * const TIM2    =   (TIMx_t  *) 0x40000000;

int main(void){
    
    // Enable GPIOA
    RCC->RCC_AHB1ENR |= 1;
    // SET GPIOA P5 as output
    GPIOA->GPIOx_MODER &= ~(3 << (5 * 2));
    GPIOA->GPIOx_MODER |=  (1 << (5 * 2));

    // Enable TIM2
    RCC->RCC_APB1ENR |= 1;
    // Set TIMER Prescaler to 1600
    TIM2->TIMx_PSC = 16000 - 1;
    // Set TIMER Autoreload value to 500
    TIM2->TIMx_ARR = 250;
    // Reset Current value register of TIM
    TIM2->TIMx_CNT = 0;
    // Configure Counter to continue opon Overflow
    TIM2->TIMx_CR1 &= ~(1 << 3);
    // Start Counter
    TIM2->TIMx_CR1 |=  1;


    for(;;){

        // Wait until counter overflows
        while(!(TIM2->TIMx_SR & 1));
        // Reset Update flag
        TIM2->TIMx_SR &= ~1;
        // Toggle pin Upon Overflow
        GPIOA->GPIOx_ODR ^= (1 << 5);

    }
}
