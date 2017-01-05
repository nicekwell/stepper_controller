#ifndef __1602_H__
#define __1602_H__

void lcm1602_init();	//1602初始化

/*
  在x列y行处写入字符串。
  x和y都是从0开始数，x范围0~15，y范围0~1。
 */
void lcm1602_write(unsigned char x, unsigned char y, unsigned char *p);

#endif
