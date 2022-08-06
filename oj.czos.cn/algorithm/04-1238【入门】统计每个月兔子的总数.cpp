/*1238 - 【入门】统计每个月兔子的总数
题目描述
有一对兔子，从出生后第3个月起每个月都生一对兔子，
一对小兔子长到第三个月后每个月又生一对兔子，
假如兔子都不死，问第n个月（n<=50）的兔子总数为多少对？

输入
输入1个整数n，表示第几个月

输出
第n个月兔子的总数量有多少对？

样例
输入
9
输出
34
来源
递归 递推

标签
递归递推
*/
#include <bits/stdc++.h>
using namespace std;
/*
求斐波拉契数列第n项的值
A(n)=A(n-1)+A(n-2)
1 1 2 3 5 8
*/
int num(int n) {  //要使用long long
  int r;
  //递归的出口（起始项）
  if (n == 1 || n == 2) {
    r = 1;
  } else {
    r = num(n - 1) + num(n - 2);
  }
  return r;
}
int main() {
  for (int i = 3; i < 100; i++) {
    cout << i << " " << num(i) << endl;
  }

  // int n, x;
  // cin >> n;
  // x = num(n);
  // cout << x << endl;
}