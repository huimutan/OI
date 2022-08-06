/*1398 - 【入门】奇偶统计？
题目描述
在一个n行m列的二维数组中，有若干奇数和偶数，
请编程统计出这个二维数组中，奇数和偶数分别有多少个？

输入
第一行是两个整数n和m（n和m都是4~100之间的整数），代表接下来的二维数组有n行m列。
接下来n行，每行有m个整数。（这些整数都是0~9999之间的整数）

输出
两个整数用空格隔开，分别代表二维数组中奇数、偶数的个数

样例
输入
2 2
2 3
4 6
输出
1 3
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, ji = 0, ou = 0;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] % 2 == 0)
        ou++;
      else
        ji++;
    }
  }
  cout << ji << " " << ou;
  return 0;
}
