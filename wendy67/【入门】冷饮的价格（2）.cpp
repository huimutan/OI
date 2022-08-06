/*A. 【入门】冷饮的价格（2）
题目描述
小明夏天去买冰棍，老板说买30个及以上1元/个，
20~29个1.2元/个，10~19个1.5元/个，10个以下1.8元/个！
请从键盘读入小明买冰棍的数量，计算小明应该付的价格（价格保留1位小数）！
输入
一个整数n代表小明购买的冰棍的数量
输出
小明应付的金额
样例
输入
30
输出
30.0
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  double n;
  cin >> n;
  if (n >= 30) {
    cout << fixed << setprecision(1) << n * 1.0;
  } else if (20 <= n && n <= 29) {
    cout << fixed << setprecision(1) << n * 1.2;
  } else if (10 <= n && n <= 19) {
    cout << fixed << setprecision(1) << n * 1.5;
  } else {
    cout << fixed << setprecision(1) << n * 1.8;
  }

  return 0;
}

