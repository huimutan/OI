/*
1192 - 【入门】斜角I
题目描述
输入整数N，输出相应方阵。

输入
一个整数N。（ 0 < n < 10 )

输出
一个方阵，每个数字的场宽为3。

样例
输入复制
5
输出复制
  1  2  3  4  5
  2  3  4  5  6
  3  4  5  6  7
  4  5  6  7  8
  5  6  7  8  9
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[20][20] = {0}, i, j, n;
  cin >> n;
  //循环赋值的次数
  for (i = 0; i < n; i++) {
    //第i次赋值的个数
    for (j = 0; j <= i; j++) {
      a[i - j][j] = i + 1;                            //左上角
      a[n - 1 - j][j + (n - 1 - i)] = 2 * n - i - 1;  //右下角
    }
  }
  //输出
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
