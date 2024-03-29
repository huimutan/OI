/*
1085: 【入门】寻找雷劈数

题目描述
把整数3025从中剪开分为30和25两个数，此时再将这两数之和平方，计算结果又等于原数。
(30+25)*(30+25)=55*55=3025，这样的数叫“雷劈数”。
求所有符合这样条件的四位数。 (ab+cd)*(ab+cd)=abcd
输入
无
输出
若干行，每行一个雷劈数，从小到大输出。

分析
第一步： 循环 1000~9999 之间的每个数
第二步： 拆出每个数的前 2 位 x 和后两位 y， 如果 i == (x + y) * (x + y)， 那么就是雷劈数
*/

#include <iostream>
using namespace std;
int main()
{
  /*思路：
      第一步：i =循环1000-9999之间的每个数
      第二步：拆出每个数i的前两位和后两位
      i = 3025
      前两位a = i / 100
      后两位b = i % 100
      第三步：判断是否满足条件(a + b) * (a + b) == i
      */
  int i, a, b;
  //循环 1000-9999
  for (i = 1000; i <= 9999; i++)
  {
    //拆出前两位和后两位
    a = i / 100;
    b = i % 100;
    if ((a + b) * (a + b) == i)
    {
      cout << i << endl;
    }
  }

  return 0;
}
