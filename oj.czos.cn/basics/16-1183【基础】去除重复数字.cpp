/*1183 - 【基础】去除重复数字
题目描述
给你N个数（n≤100）,每个数都在（0~1000）之间，其中由很多重复的数字，请将重复的数字只保留一个，并将剩下的数由小到大排序并输出。

输入
输入有2行，
第1行为1个正整数，表示数的个数:N
第2行有N个用空格隔开的整数。

输出
第1行为1个正整数M，表示不相同数的个数。
接下来的M行，每行一个整数，表示从小到大排好序的不相同的数。

样例
输入
10
20 40 32 67 40 20 89 300 400 15
输出
8
15
20
32
40
67
89
300
400
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
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      } else if (a[j] == a[j + 1]) {
        //删除重复的数a[j+1]
        for (int k = j + 1; k < n - 1; k++) {
          a[k] = a[k + 1];
        }
        n--;
      }
    }
  }
  cout << n << endl;
  for (int i = 0; i < n; i++) cout << a[i] << endl;
  return 0;
}
