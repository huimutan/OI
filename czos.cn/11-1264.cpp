/* 
1264: 【入门】4位反序数

题目描述
设N是一个四位数，它的9倍恰好是其反序数，求N。反序数就是将整数的数字倒
过来形成的整数。例如：1234的反序数是4321。

输入
无
输出
输出N这个四位数

分析
第一步：循环所有的 4 位数（1000 9999)
第二步：求出每个 4 位数的反序列
拆出每个数的个位、十位、百位、千位，然后求倒数
第三步：判断如果该数的 9 倍是其反序列再输出
*/

#include <iostream>
using namespace std;
int main()
{
  int g,s,b,q,x;//x是i的反序列
  for (int i = 1000; i <= 9999; i++)
  {
    //拆位
    q = i / 1000;
    b = i / 100 % 10;
    s = i / 10 % 10;
    g = i % 10;
    x = g * 1000 + s * 100 + b * 10 + q;
    //测试拆位
    //cout << i<<"反序列"<<x << endl;
    //判断该数的 9 倍是其反序列
    if(i*9==x){
      cout << i << endl;
    }
  }
  

  return 0;
}
