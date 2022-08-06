/* 1034: 【入门】两数比大小
    题目描述
  有A，B两个不相等的数，请将其中较大数打印出来。
  输入
  输入只有一行，包括2个整数。之间用一个空格分开。输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
  输出
  输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
  样例输入
  45 78
  样例输出
  78 */

#include <bits/stdc++.h>
// #include <iomanip>
// #include <iostream>
using namespace std;

int main()
{

  int A, B; //比大小的两个数
  cin >> A >> B;
  //判断
  if (A > B)
  {
    cout << A << endl;
  }
  else
  {
    cout << B << endl;
  }
  return 0;
}
