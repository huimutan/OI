/*1206 - 【入门】有趣的数字图形III
题目描述
读入一个整数n（n<100）,输出一个n*n的方阵。
对角线是1，对角线向右下逐渐递增，左上为空格，每个数场宽为5。

输入
一个整数n

输出
n*n的方阵

样例
输入
4
输出
                   1
              1    2
         1    2    3
    1    2    3    4
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
---0  1  2  3
||
0           1
1        1  2
2     1  2  3
3  1  2  3  4

----j0 j1 j2 j3
i0  03 12 21 30
i1  13 22 31
i2  23 32
i3  33
*/
  int a[20][20] = {0}, i, j, n;
  cin >> n;
  //循环赋值的次数
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      a[i + j][n - j - 1] = i + 1;
    }
  }
  //输出
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (a[i][j] == 0)
        cout << setw(5) << " ";
      else
        cout << setw(5) << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
