/*1214 - 【入门】在最大数后面插入一个数
题目描述
在一个不重复数组的最大数的后面插入一个新的数y

输入
有三行 第一行有一个整数n ( 5 <= n <= 100 ） 第二行有n个整数
第三行有一个整数y，为要插入的数 输出 更新后的数组

样例
输入
5
7 2 3 4 5
9
输出
7 9 2 3 4 5
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n + 1], max = 0;
  for (int i = 0; i < n; i++) {  //输入并获得最大数
    cin >> a[i];
    if (a[i] > a[max]) max = i;
  }
  int insert;
  cin >> insert;
  for (int i = n + 1; i > max + 1; i--) {  //最大数后面的数向后挪
    a[i] = a[i - 1];
  }
  a[max + 1] = insert;
  for (int i = 0; i < n + 1; i++) cout << a[i] << " ";  //输出最后数组
  return 0;
}
