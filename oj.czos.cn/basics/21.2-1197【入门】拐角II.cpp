/*1197 - 【入门】拐角II
题目描述
输入整数N，输出相应方阵。

输入
一个整数N。（ 0 < n < 10 )

输出
一个方阵，每个数字的场宽为3。

样例
输入
5
输出
  5  4  3  2  1
  4  4  3  2  1
  3  3  3  2  1
  2  2  2  2  1
  1  1  1  1  1
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
---0  1  2  3  4
||
0  5  4  3  2  1
1  4  4  3  2  1
2  3  3  3  2  1
3  2  2  2  2  1
4  1  1  1  1  1

    j0 j1 j2 j3 j4
i0  00 11 22 33 44
i1  01 12 23 34
i2  02 13 24
i3  03 14
i4  04

i0  00 11 22 33 44
i1  10 21 32 43
i2  20 31 42
i3  30 41
i4  40
  */
  int i, j, n, a[10][10] = {0};
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[j][i + j] = n - j - i;
      a[i + j][j] = n - j - i;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
