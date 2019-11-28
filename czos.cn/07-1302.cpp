#include <bits/stdc++.h>
// #include <iomanip>
// #include <iostream>
using namespace std;

int main()
{
  /* 1302: 【入门】是否适合晨练？
    题目描述
  夏天到了，气温太高，小明的爷爷每天有晨练的习惯，但有时候温度不适合晨练；小明想编写一个程序，帮助爷爷判断温度是否适合晨练，输入温度t的值，判断其是否适合晨练，适合晨练输出OK，不适合输出NO。(20 <= t <= 30,则适合晨练OK，否则不适合NO)
  输入
  一个整数代表当天的温度
  输出
  OK或者NO
  样例输入
  22
  样例输出
  OK */

  int t; //当天的温度
  cin >> t;
  //判断20 <= t <= 30则适合晨练
  if (t >= 20 && t <= 30)
  {
    cout << "OK" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
