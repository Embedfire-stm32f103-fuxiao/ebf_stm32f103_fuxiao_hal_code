
/*
	*工程模板(寄存器版本)
  */
#include "stm32f10x.h" 


/**
  *   主函数
  */
int main(void)
{	
	// 开启GPIOB 端口时钟
	RCC_APB2ENR |= (1<<2);

	//清空控制PB0的端口位
	GPIOA_CRH &= ~( 0x0F<< (4*0));	
	// 配置PB0为通用推挽输出，速度为10M
	GPIOA_CRH |= (1<<4*0);

	// PB0 输出 低电平
	GPIOA_ODR &=(1<<1);
	
	while(1);
}



// 函数为空，目的是为了骗过编译器不报错
void SystemInit(void)
{	
}






/*********************************************END OF FILE**********************/

