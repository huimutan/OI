#include "picture.h" //加入绘图头文件 

int main()
{
  Speech.Add("你好","你也好，主人");    //将对话存入语音库
  Speech.Add("你是谁？","我是魔法学院语音小精灵");   
  Speech.Add("可以帮我吗","主人，请讲"); 
  Speech.Add("我想学魔法","推荐《算法竞赛宝典》三部曲");   
  Speech.Add("魔法好学吗","只要努力和坚持，你一定可以的");   
  Speech.Add("墨老师呢","他今天不在魔法学院");   
  Speech.Add("谁在学院？","楚继光、张琪曼，李旭琳");   
  Speech.Add("我想学数学","推荐《小学奥数一本通》");   
  Speech.Add("你真聪明","谢谢你，说得我都不好意思了");   
  Speech.Add("从哪开始学呢","C++三维图形化编程是最好的入门方法");   
  Speech.Add("你会说英语吗","yes,I can speak English.");   
  Speech.Add("你会编程吗","我正在学习，总有一天我会做到");   
  Speech.Add("我们可以做朋友吗","当然可以了");   
  Speech.Add("谢谢你","不客气，这是我应该做的");   
  Speech.Add("再见","欢迎再来");      
  Speech.Chat(); //执行聊天命令                    
  Win.Show();//启动绘图窗口
}

