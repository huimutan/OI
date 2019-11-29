#include "picture.h" //加入绘图头文件
#define T 1.0 //定义常量T的值为1.0 

int main()
{
  Sound(5,-1,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(6,-1,1.0*T);
  Sound(5,-1,1.0*T);
  Sound(1,0,1.0*T);
  Sound(7,-1,2.0*T);

  Sound(5,-1,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(6,-1,1.0*T);
  Sound(5,-1,1.0*T);
  Sound(2,0,1.0*T);
  Sound(1,0,2.0*T);

  Sound(5,-1,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(5,0,1.0*T);
  Sound(3,0,1.0*T);
  Sound(1,0,1.0*T);
  Sound(7,-1,1.0*T);
  Sound(6,-1,1.0*T);

  Sound(4,0,0.5*T);
  Sound(4,0,0.5*T);
  Sound(3,0,1.0*T);
  Sound(1,0,1.0*T);
  Sound(2,0,1.0*T);
  Sound(1,0,2.0*T);

  Win.Show();//启动绘图窗口
}

