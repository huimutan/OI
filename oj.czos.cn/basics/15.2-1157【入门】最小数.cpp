/*1157 - 【入门】最小数
题目描述
输入n个整数的数列，请找出数列中最小数所在的位置
（若有多个最小数，则选最左边的那个最小数），
把它与数列的第一个数对调，其他数的位置不动，输出此数列。

输入
数组数的个数n　（Ｎ＜＝２００） 一行n个数，用空格分开（都＜＝３２７６７）

输出
第一行：最小数所在的位置（只需要输出最左边的一个的位置）
第二行：交换后的数组（一个空格隔开）

样例
输入
3
2 6 1
输出
3
1 6 2
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, min = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[min] > a[i]) min = i;
  }
  //对调
  int t = a[0];
  a[0] = a[min];
  a[min] = t;
  cout << min + 1 << endl;
  for (int i = 0; i < n; i++) cout << a[i] << " ";
  
  return 0;
}
