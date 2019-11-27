#include <bits/stdc++.h>
// #include <iomanip>
// #include <iostream>
using namespace std;

int main()
{
  /* 1304: 【入门】冷饮的价格（2）
    题目描述
  小明夏天去买冰棍，老板说买30个及以上1元/个， 20~29个1.2元/个，10~19个1.5元/个，10个以下1.8元/个！请从键盘读入小明买冰棍的数量，计算小明应该付的价格（价格保留1位小数）！
  输入
  一个整数n代表小明购买的冰棍的数量
  输出
  小明应付的金额
  样例输入
  30
  样例输出
  30.0 */

  int n;    //购买数量number
  double p; //代表应付价格price
  cin >> n;
  //判断并计算价格
  if (n >= 30)
  {
    p = 1 * n;
  }
  else if (n >= 20)
  {
    p = 1.2 * n;
  }
  else if (n >= 10)
  {
    p = 1.5 * n;
  }
  else
  {
    p = 1.8 * n;
  }
  //输出
  cout << fixed << setprecision(1) << p << endl;
  return 0;
}
