/*1147 - 【入门】求1/1+1/2+2/3+3/5+5/8+8/13+13/21……的前n项的和
题目描述
求1/1+1/2+2/3+3/5+5/8+8/13+13/21+21/34……的前n项的和。

输入
第1行：一个整数n（1 <= n <= 30 ）。

输出
一行：一个小数，即前n项之和（保留3位小数）。

样例
输入
20
输出
12.660
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
分子：1 1 2 3 5 8 13  num(i)
分母：1 2 3 5 8 13 21 num(i+1)
*/
  int n;
  cin >> n;
  int a[n + 1];
  a[1] = 1;
  a[2] = 1;
  for (int i = 3; i <= n + 1; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
  double s = 0;
  // cout << a[n];
  for (int i = 1; i <= n; i++) {
    s += a[i] * 1.0 / a[i + 1];
  }
  cout << fixed << setprecision(3) << s;
  return 0;
}
