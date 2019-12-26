/*
1040: 【入门】求三个数的大小顺序
题目描述
输入三个数，按由大到小顺序打印出来。
输入
输入只有一行，包括3个整数。之间用一个空格分开。
输出
输出只有一行，包括3个整数。之间用一个空格分开。
样例输入
3 8 2
样例输出
8 3 2
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c, t;
  cin >> a >> b >> c;
  if (a < b)
  {
    t = a;
    a = b;
    b = t;
  }
  if (b < c)
  {
    t = b;
    b = c;
    c = t;
  }
  if (a < b)
  {
    t = a;
    a = b;
    b = t;
  }
  cout << a << " " << b << " " << c;
  return 0;
}
