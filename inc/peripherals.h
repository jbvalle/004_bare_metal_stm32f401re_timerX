#ifndef PERIPHERALS_H
#define PERIPHERALS_H

#include <stdint.h>
#define __IO volatile
typedef struct RCC_t{
	__IO uint32_t RCC_CR;
	__IO uint32_t RCC_PLLCFGT;
	__IO uint32_t RCC_CFGR;
	__IO uint32_t RCC_CIR;
	__IO uint32_t RCC_AHB1RSTR;
	__IO uint32_t RCC_AHB2RSTR;
	__IO uint32_t res1[2];
	__IO uint32_t RCC_APB1RSTR;
	__IO uint32_t RCC_APB2RSTR;
	__IO uint32_t res2[2];
	__IO uint32_t RCC_AHB1ENR;
	__IO uint32_t RCC_AHB2ENR;
	__IO uint32_t res3[2];
	__IO uint32_t RCC_APB1ENR;
	__IO uint32_t RCC_APB2ENR;
	__IO uint32_t res4[2];
	__IO uint32_t RCC_AHB1LPENR;
	__IO uint32_t RCC_AHB2LPENR;
	__IO uint32_t res5[2];
	__IO uint32_t RCC_APB1LPENR;
	__IO uint32_t RCC_APB2LPENR;
	__IO uint32_t res6[2];
	__IO uint32_t RCC_BDCR;
	__IO uint32_t RCC_CSR;
	__IO uint32_t res7[2];
	__IO uint32_t RCC_SSCGR;
	__IO uint32_t RCC_PLLI2SCFGR;
	__IO uint32_t res8;
	__IO uint32_t RCC_DCKCFGR;
}RCC_t;

typedef struct GPIOx_t{
	__IO uint32_t GPIOx_MODER; 		
	__IO uint32_t GPIOx_OTYPER;	
	__IO uint32_t GPIOx_OSPEEDER;	
	__IO uint32_t GPIOx_PUPDR;	
	__IO uint32_t GPIOx_IDR;
	__IO uint32_t GPIOx_ODR;	
	__IO uint32_t GPIOx_BSRR;	
	__IO uint32_t GPIOx_LCKR;
	__IO uint32_t GPIOx_AFRL;
	__IO uint32_t GPIOx_AFRH;
}GPIOx_t;

typedef struct TIMx_t{
    __IO uint32_t TIMx_CR1;
    __IO uint32_t TIMx_CR2;
    __IO uint32_t TIMx_SMCR;
    __IO uint32_t TIMx_DIER;
    __IO uint32_t TIMx_SR;
    __IO uint32_t TIMx_EGR;
    __IO uint32_t TIMx_CCMR1;
    __IO uint32_t TIMx_CCMR2;
    __IO uint32_t TIMx_CCER;
    __IO uint32_t TIMx_CNT;
    __IO uint32_t TIMx_PSC;
    __IO uint32_t TIMx_ARR;
    __IO uint32_t res1;
    __IO uint32_t TIMx_CCR1;
    __IO uint32_t TIMx_CCR2;
    __IO uint32_t TIMx_CCR3;
    __IO uint32_t TIMx_CCR4;
    __IO uint32_t res2;
    __IO uint32_t TIMx_DCR;
    __IO uint32_t TIMx_DMAR;
    __IO uint32_t TIMx_OR;
}TIMx_t;
#endif


