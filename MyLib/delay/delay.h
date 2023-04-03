#ifndef __DELAY_H
#define __DELAY_H 			   

#include "gd32f4xx.h"
//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK STM32������
//ʹ��SysTick����ͨ����ģʽ���ӳٽ��й���(֧��OS)
//����delay_us,delay_ms
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2016/7/8
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2014-2024
//All rights reserved
//********************************************************************************
//�޸�˵��
//V1.1 20160708 
//��ֲ��F429������,���F7������Ӧ�޸�
////////////////////////////////////////////////////////////////////////////////// 

typedef unsigned          char u8;
typedef unsigned short     int u16;
typedef unsigned           int u32;

void delay_init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);

#endif




























