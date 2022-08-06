/*A. 【入门】冷饮的价格（1）
题目描述
小明去冷饮店买冰激凌，如果买10个以上或者10个，2元/个，10个以下，2.2元/个，
请从键盘读入小明的购买数量，计算小明应付的价格！

输入
一个整数，代表小明购买的冰激凌的数量（n<=100）

输出
小明应付的金额，金额保留1位小数！

样例
输入
20
输出
40.0
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  float n;
  cin >> n;
  if (n < 10) {
    cout <<fixed <<setprecision(1)<< n * 2.2;
  } else {
    cout <<fixed <<setprecision(1)<< n * 2.0;
  }
  return 0;
}
