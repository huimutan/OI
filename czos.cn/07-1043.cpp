/*1043: 【入门】行李托运价格
  题目描述
  某车站行李托运收费标准是：10公斤或10公斤以下，收费2.5元，超过10公斤的行李，按每超过1公斤增加1.5元进行收费。 试编一程序，输入行李的重量，算出托运费。
  输入
  输入只有一行，包括1个整数。
  输出
  输出只有一行，包括1个数。 （保留两位小数）
  样例输入
  10
  样例输出
  2.50*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;    //行李重量
  double m; //退运费
  cin >> n;
  if (n <= 10)
  {
    m = 2.5;
  }
  else
  {
    m = 2.5 + (n - 10) * 1.5;
  }
  cout << fixed << setprecision(2) << m << endl; //输出结果四舍五入保留两位小数
  return 0;
}
