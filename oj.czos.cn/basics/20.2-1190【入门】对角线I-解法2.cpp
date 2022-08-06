/*1190 - 【入门】对角线I
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
  1  0  0  0  0
  0  1  0  0  0
  0  0  1  0  0
  0  0  0  1  0
  0  0  0  0  1
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;

int a[20][20];
int main() {
  int n, i, j;
  cin >> n;
  //赋值n个数
  //该循环表示，循环赋值元素的个数
  for (i = 0; i < n; i++) {
    a[i][i] = 1;
  }
  //输出
  //循环行
  for (i = 0; i < n; i++) {
    //循环列
    for (j = 0; j < n; j++) {
      cout << setw(3) << a[i][j];
    }
    //第i行输出结束，输出换行
    cout << endl;
  }
  return 0;
}
