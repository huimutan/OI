/*
1041: 【入门】判断三个整数是否相邻
题目描述
判断三个整数是否相邻，是输出"TRUE"，否则输出"FALSE"。
输入
输入只有一行，包括3个整数。
输出
输出只有一行。
样例输入
1 3 2
样例输出
TRUE
提示
三个整数不一定是有序的，例如：1 3 2，是相邻的数！
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
  //cout << a<<" "<< b<<" "<< c<<endl;
  if (a - b == 1 && b - c == 1)
  {
    cout << "TRUE";
  }
  else
  {
    cout << "FALSE";
  }

  return 0;
}
