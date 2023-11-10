#ifndef __CONFIG_H__
#define __CONFIG_H__

//引脚定义
/*******************************************************/
//R 红色灯
#define LED1_PIN GPIO_Pin_10
#define LED1_GPIO_PORT GPIOH
#define LED1_GPIO_CLK RCC_AHB1Periph_GPIOH7

//G 绿色�?
#define LED2_PIN GPIO_Pin_11
#define LED2_GPIO_PORT GPIOH
#define LED2_GPIO_CLK RCC_AHB1Periph_GPIOH

//B 蓝色�?
#define LED3_PIN GPIO_Pin_12
#define LED3_GPIO_PORT GPIOH
#define LED3_GPIO_CLK RCC_AHB1Periph_GPIOH
/*********************************************************/

#endif //__CONFIG_H__