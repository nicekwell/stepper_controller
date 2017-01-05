# stepper_controller
步进电机控制器  
单片机控制A3967驱动不仅电机，带有1602显示。  
![stepper_controller.jpg](https://github.com/nicekwell/stepper_controller/raw/master/stepper_controller.jpg)

# 功能
可以控制4线2相步进电机。  
可调方向，可调速度，可调步进细分。  
1602显示。

左边两个按键调步进细分值。  
下方5个按键从左到右功能依次是：速度-1、步进-1、停止、步进+1、速度+1。

# 硬件
【单片机】STC12C5A60S2  
【晶振】24MHz  
【引脚连接】

功能 | 引脚 | 备注
:-: | :-: | :-:
1602 RS | P2.2 |
1602 RW | P2.1 |
1602 EN | P2.0 |
1602数据 | P0口 |
A1967 MS1 | P2.3 |
A1967 MS2 | P2.4 |
A1967 DIR | P2.5 |
A1967 STEP | P2.6 |
key 步进细分+1 | P1.1 |
key 步进细分-1 | P1.0 |
key 速度-1 | P1.2 |
key 步进-1 | P1.3 |
key 停止 | P1.6 |
key 步进+1 | P3.4 |
key 速度+1 | P3.5 | 



