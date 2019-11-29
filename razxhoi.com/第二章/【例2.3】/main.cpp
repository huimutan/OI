#include "picture.h" //加入绘图头文件 

int main()
{
  Win.Name("两棵并排的树");//改变绘图窗体的名称
  Pen.Color(0,255,0);//设置画笔颜色为红色
  Win.BackColor(128,127,255);//设置窗口的背景色
  Win.Cout("     *          *     ");
  Win.Cout("    ***        ***    ");
  Win.Cout("   *****      *****   ");
  Win.Cout("  *******    *******  ");
  Win.Cout("     *          *     ");
  Win.Cout("     *          *     ");
  Win.Show();//启动绘图窗口
}

