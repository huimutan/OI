/* 1305: 【入门】求四个数的最大数
题目描述
已知有四个不等的数，将其中的最大数找出来。
输入
输入只有一行，包括4个整数。之间用一个空格分开。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
1 9 8 6
样例输出
9
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d; //4个数
  cin >> a >> b >> c >> d;
  //判断
  if (a > b && a > c && a > d)
  {
    cout << a << endl;
  }
  else if (b > c && b > d)
  {
    cout << b << endl;
  }
  else if (c > d)
  {
    cout << c << endl;
  }
  else
  {
    cout << d << endl;
  }

  return 0;
}
