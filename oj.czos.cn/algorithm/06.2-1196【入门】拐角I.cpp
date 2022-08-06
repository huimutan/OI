/*1196 - 【入门】拐角I
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
  1  1  1  1  1
  1  2  2  2  2
  1  2  3  3  3
  1  2  3  4  4
  1  2  3  4  5
来源
二维数组

标签
二维数组
*/

#include <bits/stdc++.h>
using namespace std;
int a[20][20];
int n;
//递归为二维数组的第 i 行和第 i 列赋值
void fun(int i) {
  //递归的出口（递归条件）
  if (i <= n) {
    //第 i 行从下标为 i 的那一列开始赋值
    for (int j = i; j <= n; j++) {
      //为第 i 行赋值
      //为第i列赋值
      a[j][i] = i;
      a[i][j] = i;
    }
    //递归为下一行赋值
    fun(i + 1);
  }
}
int main() {
  cin >> n;
  //从第1行、第 1 列开始递归为二维数组赋值
  fun(1);
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
}