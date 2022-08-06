/*1145 - 【入门】数列求和
题目描述
有一数列如下： 1 2 4 7 11 16 22…… 试求该数列前N项之和。

输入
一个整数N（ 0 < N < 1000 ）。

输出
一个整数。

样例
输入
6
输出
41
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + n - 1;
  }
  return r;
}
int main() {
  int s = 0;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    s = s + num(i);
  }
  cout << s << endl;
}