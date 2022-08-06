/*1367 - 【入门】骨牌铺方格
题目描述
有1×n（n<=50）的一个长方形，用1×1、1×2和1×3的骨牌铺满方格，请问有多少种铺法？
例如当n=3时为1×3的方格。此时用1×1、1×2和1×3的骨牌铺满方格，共有四种铺法。如下图：


输入
一个整数n（n<=50）

输出
骨牌的铺法

样例
输入
3
输出
4
来源
递推

标签
递推
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a = 1, b = 2, c = 4, d;
  for (int i = 4; i <= n; i++) {
    d = a + b + c;
    a = b;
    b = c;
    c = d;
  }
  if (n == 1)
    cout << a;
  else if (n == 2)
    cout << b;
  else if (n == 3)
    cout << c;
  else
    cout << d;
  return 0;
}
