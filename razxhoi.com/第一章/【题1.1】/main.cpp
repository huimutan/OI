#include "picture.h" //加入绘图头文件 

int main()
{
  Win.Name("这是我的第一个程序");
  Pen.Show(0);
  Win.Info(0);
  Win.Set3D(1);
  Win.Size(500,500);
  Win.Place(10,10);
// Win.FullScreen();//此处满屏命令与Size命令不应同时用
  Model.Heart(40,30);
  Win.Show();//启动绘图窗口
}
