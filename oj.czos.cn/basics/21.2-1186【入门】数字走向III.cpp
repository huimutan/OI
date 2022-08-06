/*1186 - 【入门】数字走向III
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
  1  6 11 16 21
  2  7 12 17 22
  3  8 13 18 23
  4  9 14 19 24
  5 10 15 20 25
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[20][20] = {0}, i, j, n, x = 1;
  cin >> n;
  //赋值n次
  // i:代表赋值的次数
  for (i = 0; i < n; i++) {
    //第i次要赋值n个数
    // j代表第i次赋值元素的个数
    for (j = 0; j < n; j++) {
      a[j][i] = x;
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
}
