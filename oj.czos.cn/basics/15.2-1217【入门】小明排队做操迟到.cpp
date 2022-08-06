/*1217 - 【入门】小明排队做操迟到
题目描述
做操的时间到了，小明在教室还在思考刚刚老师讲的一道题目，当他想通这个题时，同学们都已经在操场上排好队了，
他赶快跑到操场上找到自己的班级队伍，希望尽快找到以前排队的位置，准备做操，小明记得应该排在第x学号同学的后面。
你能不能来帮帮小明呢？

输入
输入（两行）：

第一行3个整数：n x y（现在队伍的长度、第x同学的学号、小明的学号）

第二行n个整数：n个同学的学号

输出
n+1个学号（小明加入队伍后队伍中的每个数据）

样例
输入
4 32 23
1 8 32 56
输出
1 8 32 23 56
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, y;  //现在队伍的长度、第x同学的学号、小明的学号
  cin >> n >> x >> y;
  int a[n + 1], flag = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == x) flag = i;
  }
  for (int i = n + 1; i > flag + 1; i--) {
    a[i] = a[i - 1];
  }
  a[flag+1] = y;
  for (int i = 0; i < n + 1; i++) cout << a[i] << " ";
  return 0;
}
