/*题目描述
一个非负整数n，加上100是得到的n+100是一个完全平方数，
在加100的基础上再加上168得到的n+100+168又是一个完全平方数，请问该数最小是多少？

输入
无
输出
符合条件的最小的数

来源
简单循环
标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  i+100和i+268都是完全平方数
  i = 0开始找起，如果i不满豆上述条件，则i++
  i如果不满足上述条件，则循环，找到第一个满足条件的数之后，停止循环
  */
  int i = 0;
  //当i+100不是完全平方数，或者i+268不是，则循环
  while (sqrt(i + 100) != (int)sqrt(i + 100) ||
         sqrt(i + 268) != (int)sqrt(i + 268)) {
    i++;
  }
  cout << i << endl;
  return 0;
}
