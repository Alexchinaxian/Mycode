#include "stm32f4xx.h"
#include "bsp.h"
void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
    for(; nCount != 0; nCount--);
}
int main(void)
{
    Bsp_Init();
    while(1)
    {

    }
}
