/*1170 - 【入门】最大数
题目描述
n个数中最大的那个数在哪里？输出其位置，若有多个最大数则都要输出。

输入
第一行：n（ 3 <= n <= 10） 第二行：空格隔开的n个数

输出
输出若干个数，表示最大数的位置，每行一个。

样例
输入
5
1 2 6 3 6
输出
3
5
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, max = 0;  //求最大数 ;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[max] < a[i]) {
      max = i;
    }
  }

  for (int i = 0; i < n; i++) {  //求哪些位置的数是最大的
    if (a[i] == a[max]) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
