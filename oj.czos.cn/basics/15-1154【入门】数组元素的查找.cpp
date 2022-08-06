/*1154 - 【入门】数组元素的查找
题目描述
给你m个整数，查找其中有无值为n的数，有则输出该数第一次出现的位置,没有则输出-1。

输入
第一行一个整数m：数的个数 ( 0 <= m <= 100 ) 第二行m个整数（空格隔开）( 这些数在
0-1000000范围内 ) 第三行为要查找的数n；

输出
n的位置或-1

样例
输入
4
1 2 3 3
3
输出
3
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /* int a[100], n, x;
  //读入数组中实际元素个数
  cin >> n;
  //读入数组的n个元素
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> x;   //读入要找的数x
  int f = 0;  // f=0表示x没有找到
  for (int i = 0; i < n; i++) {
    //如果找到了第一个出现的x
    if (a[i] == x) {  //逐个判断是否是x
      f = 1;
      cout << i + 1 << endl;
      break;  //停止循环
    }
  }
  //循环结束,如果没有找到x,则输出-1
  if (f == 0) {
    cout << -1 << endl;
  } */
  int a[100], n, x;
  int p = -1;  //存放 x 第一次出现的位置 (position), 假设没有找到
  cin >> n;    //读入数組中实际元素个数
  //读入数组的n个元素
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  //读入要找的数x
  cin >> x;
  //逐个判断a[i]是否是X
  for (int i = 0; i < n; i++) {
    //如果找到了第一个出现的x
    if (a[i] == x) {
      p = i + 1;  //记录x彿一次出现的位置
      break;      //停止循环
    }
  }
  cout << p << endl;
  return 0;
}