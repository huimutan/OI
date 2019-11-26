// #include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  /*1303: 【入门】冷饮的价格（1）
  **题目描述**
  小明去冷饮店买冰激凌，如果买10个以上或者10个，2元/个，10个以下，2.2元/个，请从键盘读入小明的购买数量，计算小明应付的价格！
  **输入**
  一个整数，代表小明购买的冰激凌的数量（n<=100）
  **输出**
  小明应付的金额，金额保留1位小数！
  **样例输入**
  20
  **样例输出**
  40.0*/

  int n;    //购买数量number
  double p; //代表应付价格price
  cin >> n;
  //判断并计算价格
  if (n >= 10)
  {
    p = 2 * n;
  }
  else
  {
    p = 2.2 * n;
  }
  //输出
  cout << fixed << setprecision(1) << p << endl;
  return 0;
}
