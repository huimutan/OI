/*1213 - 【入门】删除数组的最小数
题目描述
在一个不重复的数组中，请将这个数组的最小数删除后输出！

输入
有两行 第一行有一个整数n ( 5 <= n <= 100 ） 第二行有n个不重复的整数！

输出
删除最小数后的数组！

样例
输入
5
1 7 6 8 2
输出
7 6 8 2
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0, min = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[min] > a[i]) min = i;
  }
  for (int i = min; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  for (int i = 0; i < n - 1; i++) cout << a[i] << " ";

  return 0;
}
