/*1189 - 【入门】数字走向VI
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
 10  9  8  7  6
 15 14 13 12 11
 20 19 18 17 16
 25 24 23 22 21
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[20][20] = {}, i, j, n, x = 1;
  cin >> n;
  //赋值n次
  // i:代表赋值的次数
  for (i = 0; i < n; i++) {
    //第i次要赋值n个数
    // j代表第i次赋值元素的个数
    for (j = 0; j < n; j++) {
      a[i][n - 1 - j] = x;
      x++;
    }
  }
  //循环输出
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
