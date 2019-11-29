#include "picture.h" //加入绘图头文件 

int main()
{
  Speech.Add("系统版本","winver"); //添加语音库
  Speech.Add("写字板","write");
  Speech.Add("画图板","mspaint");
  Speech.Add("记事本","notepad");
  Speech.Add("计算器","calc");
  Speech.Add("我要上网","iexplore");
  Speech.Add("我要做题","iexplore http://www.razxhoi.com");
  Speech.Do();//执行命令功能
  Win.Show();//启动绘图窗口
}

