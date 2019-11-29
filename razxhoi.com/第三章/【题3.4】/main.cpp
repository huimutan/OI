#include "picture.h" //加入绘图头文件 

int main()
{
  //复杂的命令也可以写到批处理文件里，然后把批处理文件放到系统文件夹下
  Speech.Add("我要写作","winword.exe");
  Speech.Add("我要做幻灯片","powerpnt.exe");
  Speech.Do();//执行命令功能
  Win.Show();//启动绘图窗口
}

