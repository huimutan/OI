/* 
1053: 【入门】求100+97+……+4+1的值。

题目描述
求100+97+……+4+1的值
输入
无
输出
输出一行，即求到的和。
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 100,s=0;
  while (i >= 1)
  {

    s = s + i;

    i=i-3;
  }
  cout << s << endl;
  return 0;
}
