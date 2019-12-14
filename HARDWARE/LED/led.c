/**
 * @file led.c
 * @author ZhouShibo (zhoushiboBIT@163.com)
 * @brief 
 * @version 0.0.1.0
 * @date 2019-12-12
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "led.h"

//��ʼ��PF9��PF10Ϊ�����.��ʹ���������ڵ�ʱ��
//LED IO��ʼ��
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE); //ʹ��GPIOFʱ��

	//GPIOF9,F10��ʼ������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;	  //��ͨ���ģʽ
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;	 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz; //100MHz
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;	   //����
	GPIO_Init(GPIOE, &GPIO_InitStructure);			   //��ʼ��

	GPIO_SetBits(GPIOE, GPIO_Pin_3 | GPIO_Pin_4); //GPIOE3,E4���øߣ�����

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE); //ʹ��GPIOFʱ��

	//GPIOF9,F10��ʼ������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;	  //��ͨ���ģʽ
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;	 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz; //100MHz
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;	   //����
	GPIO_Init(GPIOG, &GPIO_InitStructure);			   //��ʼ��

	GPIO_SetBits(GPIOG, GPIO_Pin_9); //GPIOE3,E4���øߣ�����
}
