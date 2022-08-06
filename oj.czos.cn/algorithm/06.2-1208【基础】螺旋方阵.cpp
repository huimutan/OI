/*1208 - 【基础】螺旋方阵
题目描述
螺旋方阵

输入
一个整数n(０＜ｎ＜10)

输出
一个n行方阵，每行n个数，每个数场宽为3

样例
输入
5
输出
  1  2  3  4  5
 16 17 18 19  6
 15 24 25 20  7
 14 23 22 21  8
 13 12 11 10  9
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
int a[20][20], n;
//为二维数组的第x圈赋值
// start: 起始点的坐标
// len:赋值的宽度
// x:起始值
void fun(int start, int len, int x) {
  //递归出口
  if (len > 0) {
    int i, j;
    //循环第1行的列（向右）
    for (j = start; j <= start + len - 1; j++) {
      a[start][j] = x;
      x++;
    }
    //循环向下，最后一列，循环行
    for (i = start + 1; i <= start + len - 1; i++) {
      a[i][start + len - 1] = x;
      x++;
    }
    //循环向左，最后一行，循环列
    for (j = start + len - 2; j >= start; j--) {
      a[start + len - 1][j] = x;
      x++;
    }
    //循环向上，第 1 列，循环行
    for (i = start + len - 2; i >= start + 1; i--) {
      a[i][start] = x;
      x++;
    }
    //递归为 start+1 这一圈赋值
    fun(start + 1, len - 2, x);
  }
}

int main() {
  cin >> n;
  //为从1,1点开始的一圈赋值， 初始值赋1
  fun(1, n, 1);
  //输出
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
}