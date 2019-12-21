/* 
1056: 【入门】所有不超过1000的数中含有数字3的自然数
题目描述
编程求出所有不超过1000的数中，含有数字3的自然数，并统计总数。
输入
无
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1, zongshu = 0;
  while (i < 1000)
  {
    if (i % 10 == 3 || i / 10 == 3 || i % 100 / 10 == 3)//|| i % 1000 / 10 == 3
    {
      //cout << i << " ";
      zongshu++;
      //cout << "总数=" << zongshu << endl;
    }
    i++; //i=i+1
  }
  cout << zongshu << endl;
  return 0;
}
