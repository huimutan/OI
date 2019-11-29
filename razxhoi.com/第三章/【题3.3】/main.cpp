#include "picture.h" //加入绘图头文件 

int main()
{
  Speech.Add("苹果","apple,a,p,p,l,e,apple");    //将对话存入语音库
  Speech.Add("树","tree,t,r,e,e,tree");
  Speech.Add("书","book,b,o,o,k,book");
  Speech.Add("水","water,w,a,t,e,r,water");
  Speech.Add("食物","food,f,o,o,d,food");
  Speech.Add("老师","teacher,t,e,a,c,h,e,r,teacher");
  Speech.Add("学习","study,s,t,u,d,y,study");
  Speech.Add("计算机","computer,c,o,m,p,u,t,e,r,computer");
  Speech.Add("英语","english,e,n,g,l,i,s,h,english");
  Speech.Add("商店","shop,s,h,o,p,shop");
  Speech.Add("早晨","morning,m,o,r,n,i,n,g,morning");
  Speech.Add("学校","school,s,c,h,o,o,l,school");
  Speech.Add("朋友","friend,f,r,i,e,n,d,friend");
  Speech.Add("谢谢","thanks,t,h,a,n,k,s,thanks");
  Speech.Add("房子","house,h,o,u,s,e,house");
  Speech.Chat(); //执行聊天命令
  Win.Show();//启动绘图窗口
}

