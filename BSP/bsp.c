
// Inc file -------------------------------------------------------------------
#include "bsp.h"

// Various --------------------------------------------------------------------

// Outer Funcs ----------------------------------------------------------------

void Bsp_Init(void)
{
    bsp_Clock();
    /*系统中断配置*/
    /*系统硬件延时初始化，必须放在最前面*/
    /*GPIO 初始化*/
    GPIO_Config();

}


