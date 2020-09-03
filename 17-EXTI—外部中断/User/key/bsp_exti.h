#ifndef __EXTI_H
#define	__EXTI_H

#include "stm32f1xx.h"

//Òý½Å¶¨Òå
/*******************************************************/
#define KEY1_INT_GPIO_PORT                GPIOA
#define KEY1_INT_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE();
#define KEY1_INT_GPIO_PIN                 GPIO_PIN_15
#define KEY1_INT_EXTI_IRQ                 EXTI15_10_IRQn
#define KEY1_IRQHandler                   EXTI15_10_IRQHandler

#define KEY2_INT_GPIO_PORT                GPIOD
#define KEY2_INT_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOD_CLK_ENABLE();
#define KEY2_INT_GPIO_PIN                 GPIO_PIN_2
#define KEY2_INT_EXTI_IRQ                 EXTI2_IRQn
#define KEY2_IRQHandler                   EXTI2_IRQHandler

#define KEY3_INT_GPIO_PORT                GPIOD
#define KEY3_INT_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOD_CLK_ENABLE();
#define KEY3_INT_GPIO_PIN                 GPIO_PIN_3
#define KEY3_INT_EXTI_IRQ                 EXTI3_IRQn
#define KEY3_IRQHandler                   EXTI3_IRQHandler

#define KEY4_INT_GPIO_PORT                GPIOD
#define KEY4_INT_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOD_CLK_ENABLE();
#define KEY4_INT_GPIO_PIN                 GPIO_PIN_4
#define KEY4_INT_EXTI_IRQ                 EXTI4_IRQn
#define KEY4_IRQHandler                   EXTI4_IRQHandler

/*******************************************************/


void EXTI_Key_Config(void);

#endif /* __EXTI_H */
