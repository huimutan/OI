// #include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  /* 1033: 【入门】判断奇偶数
   题目描述
输入一个整数，判断是否为偶数。是输出"y e s"，否则输出"n o"。
输入
输入只有一行，包括1个整数。
输出
输出只有一行。（注意输出格式，具体请看下方提示）
样例输入
2
样例输出
y e s */

  int n; //一个整数
  cin >> n;
  //判断并计算价格
  if (n % 2 == 0)
  {
    cout << "y e s";
  }
  else
  {
    cout << "n o";
  }
  return 0;
}
