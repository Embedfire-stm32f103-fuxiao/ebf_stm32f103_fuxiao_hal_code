#ifndef __BSP_I2C_H
#define	__BSP_I2C_H

#include "stm32f1xx.h"
#include "./usart/bsp_debug_usart.h"

/*等待超时时间*/
#define Delay 		HAL_Delay

#define I2Cx_FLAG_TIMEOUT             ((uint32_t) 1000) //0x1100
#define I2Cx_LONG_TIMEOUT             ((uint32_t) (300 * I2Cx_FLAG_TIMEOUT)) //was300
/**************************I2C参数定义，I2C1或I2C2********************************/
#define I2C_OWN_ADDRESS           0x00


#define SENSORS_I2C              		      I2C2
#define SENSORS_I2C_RCC_CLK_ENABLE()   	 __HAL_RCC_I2C2_CLK_ENABLE()
#define SENSORS_I2C_FORCE_RESET()    		 __HAL_RCC_I2C2_FORCE_RESET()
#define SENSORS_I2C_RELEASE_RESET()  		 __HAL_RCC_I2C2_RELEASE_RESET()

/*引脚定义*/ 
#define SENSORS_I2C_SCL_GPIO_PORT         GPIOB
#define SENSORS_I2C_SCL_GPIO_CLK_ENABLE() __HAL_RCC_GPIOB_CLK_ENABLE()
#define SENSORS_I2C_SCL_GPIO_PIN         	GPIO_PIN_10
 
#define SENSORS_I2C_SDA_GPIO_PORT         GPIOB
#define SENSORS_I2C_SDA_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOB_CLK_ENABLE()
#define SENSORS_I2C_SDA_GPIO_PIN          GPIO_PIN_11

#define SENSORS_I2C_AF                  	 GPIO_AF4_I2C2





/*信息输出*/
#define I2C_DEBUG_ON         1
#define I2C_DEBUG_FUNC_ON    0

#define I2C_INFO(fmt,arg...)           printf("<<-I2C-INFO->> "fmt"\n",##arg)
#define I2C_ERROR(fmt,arg...)          printf("<<-I2C-ERROR->> "fmt"\n",##arg)
#define I2C_DEBUG(fmt,arg...)          do{\
                                          if(I2C_DEBUG_ON)\
                                          printf("<<-I2C-DEBUG->> [%d]"fmt"\n",__LINE__, ##arg);\
                                          }while(0)

#define I2C_DEBUG_FUNC()               do{\
                                         if(I2C_DEBUG_FUNC_ON)\
                                         printf("<<-I2C-FUNC->> Func:%s@Line:%d\n",__func__,__LINE__);\
                                       }while(0)


																			 
void I2cMaster_Init(void);
unsigned short Get_I2C_Retry(void);
																			 
int Sensors_I2C_ReadRegister(unsigned char slave_addr,
                                       unsigned char reg_addr,
                                       unsigned short len, 
                                       unsigned char *data_ptr);
int Sensors_I2C_WriteRegister(unsigned char slave_addr,
                                        unsigned char reg_addr,
                                        unsigned short len, 
                                        unsigned char *data_ptr);


#endif /* __BSP_I2C_H */

