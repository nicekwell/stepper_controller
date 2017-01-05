#define DP1602 P0
sbit rs=P2^2;
sbit rw=P2^1;
sbit en=P2^0;

static void delay_1602()
{
	unsigned int i;
	for(i=500;i>0;i--);
}

static void wcom(unsigned char com)	//��1602д����
{
	rs=0;
	rw=0;
	DP1602=com;
	en=1;
	delay_1602();
	en=0;
}

static void wdat(unsigned char dat)	//��1602д����
{
	rs=1;
	rw=0;
	DP1602=dat;
	en=1;
	delay_1602();
	en=0;
}	

void lcm1602_init()	//1602��ʼ��
{
	wcom(0x38);
	wcom(0x0c);
	wcom(0x06);
	wcom(0x80);
}

/*
  ��x��y�д�д���ַ�����
  x��y���Ǵ�0��ʼ����x��Χ0~15��y��Χ0~1��
 */
void lcm1602_write(unsigned char x, unsigned char y, unsigned char *p)
{
    if(y == 0)
	wcom(0x80 + x);
    else if(y == 1)
	wcom(0x80+0x40 + x);
    for(; *p != '\0'; p++)
	wdat(*p);
}
