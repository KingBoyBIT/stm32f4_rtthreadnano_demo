#ifndef __LED_H
#define __LED_H
#include "sys.h"

//////////////////////////////////////////////////////////////////////////////////	 
 
//LED��������	   
//STM32F4����-�⺯���汾
//�Ա����̣�http://mcudev.taobao.com									  
////////////////////////////////////////////////////////////////////////////////// 	


//LED�˿ڶ���
#define LED0 PEout(3)	  // D1
#define LED1 PEout(4)	// D2	 
#define LED2 PGout(9)	// D2

void LED_Init(void);//��ʼ��		 				    
#endif
