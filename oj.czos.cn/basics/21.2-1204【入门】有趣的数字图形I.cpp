/*1204 - 【入门】有趣的数字图形I
题目描述
读入一个整数n,输出一个n*n的方阵。
对角线是1，对角线向右上逐渐递增，左下为空格，每个数场宽为5。

输入
一个整数n。（n<100）
输出
n*n的方阵。

样例
输入
4
输出
    1    2    3    4
         1    2    3
              1    2
                   1
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
0  1  2  3  4
1     1  2  3
2        1  2
3           1

    j0 j1 j2 j3
i0  00 11 22 33
i1  01 12 23
i2  02 13
i3  03

*/
  int a[20][20] = {0}, i, j, n;
  cin >> n;
  //循环赋值的次数
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      a[j][i + j] = i + 1;
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
