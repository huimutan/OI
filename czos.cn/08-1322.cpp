/* 1322: 【入门】求数的量级？
题目描述
有一个很大的整数n（n>=10000且n<=9999999999），请问该数的最高位是什么量级的，输出该量级的拼音？
可选单位：万（wan）、十万（shi wan）、百万（bai wan）、千万（qian wan）、亿（yi）、十亿（shi yi）。
如：n=123456789，则输出：yi
（4.2.15）
输入
一个很大的整数n（n>=10000且n<=9999999999）
输出
n量级的拼音
样例输入
123456789
样例输出
yi
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n; //很大的整数
  cin >> n;
  //判断
  if (n >= 10000 && n < 100000)
  {
    cout << "wan" << endl;
  }
  else if (n < 1000000)
  {
    cout << "shi wan" << endl;
  }
  else if (n < 10000000)
  {
    cout << "bai wan" << endl;
  }
  else if (n < 100000000)
  {
    cout << "qian wan" << endl;
  }
  else if (n < 1000000000)
  {
    cout << "yi" << endl;
  }
  else if (n < 10000000000)
  {
    cout << "shi yi" << endl;
  }
  else
  {
  }

  return 0;
}
