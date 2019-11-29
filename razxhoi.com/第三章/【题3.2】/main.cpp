#include "picture.h" //加入绘图头文件 

int main()
{
  cout<<"    大风歌\n";
  Speech.Speak("大风歌");
  cout<<"大风起兮云飞扬。\n";
  Speech.Speak("大风起兮云飞扬。");
  cout<<"威加海内兮归故乡。\n";
  Speech.Speak("加海内兮归故乡。");
  cout<<"安得猛士兮守四方！\n";
  Speech.Speak("安得猛士兮守四方！");
  Win.Show();//启动绘图窗口
}
