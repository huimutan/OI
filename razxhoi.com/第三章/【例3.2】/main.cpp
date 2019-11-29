#include "picture.h" //加入绘图头文件
#define T 1.3 //定义常量T的值为1.3 

int main()
{
  Sound(1,0,0.5*T);
  Sound(2,0,0.5*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(1,0,0.5*T);
  Sound(2,0,0.5*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(3,0,0.5*T);
  Sound(4,0,0.5*T);
  Sound(5,0,1.0*T);
  Sound(3,0,0.5*T);
  Sound(4,0,0.5*T);
  Sound(5,0,1.0*T);

  Sound(5,0,0.25*T);
  Sound(6,0,0.25*T);
  Sound(5,0,0.25*T);
  Sound(4,0,0.25*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(5,0,0.25*T);
  Sound(6,0,0.25*T);
  Sound(5,0,0.25*T);
  Sound(4,0,0.25*T);
  Sound(3,0,0.50*T);
  Sound(1,0,0.50*T);

  Sound(1,0,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(1,0,1.0*T);
  Sound(1,0,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(1,0,1.0*T);

  Win.Show();//启动绘图窗口
}

