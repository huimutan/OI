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
int main() {
  int a[20][20];
  int n, i, j;
  cin >> n;
  //循环赋值元素的个数，赋值n个数
  //该循环表示，循环赋值元素的个数
  //方法一
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i <= j)
        a[i][j] = i + 1;
      else
        a[i][j] = j + 1;
    }
  }
//方法2
  /*   for (i = 0; i < n; i++) {
      //第i次，赋值的元素的个数
      for (j = 0; j < n - i; j++) {
        a[i][j + i] = i + 1;  //横向
        a[j + i][i] = i + 1;  //纵向
      }
    } */
//方法3
  /*   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] = i + 1;
      }
      for (int j = 0; j < i; j++) {
        a[i][j] = j + 1;
      }
    } */

  //输出
  for (i = 0; i < n; i++) {    //循环行
    for (j = 0; j < n; j++) {  //循环列
      cout << setw(3) << a[i][j];
    }
    cout << endl;  //第i行输出结束，输出换行
  }
  return 0;
}
