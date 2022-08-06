/*1232 - 【入门】换位置
题目描述
体育课上，有一个班级的同学站成了一队，体育老师请最高的和最矮的两位同学调换一下位置，
其余的同学不要动，请编程实现！（假设所有人的高矮都是不一样的）

输入
第一行有一个整数n代表该班级的总人数（n≤100）

第二行有n个数，代表每个人的身高

输出
调换位置后的结果

样例
输入
8
8 9 10 4 7 6 5 3
输出
8 9 3 4 7 6 5 10
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
  cin >> n;
  int a[n], min = 0, max = 0;  //最大最小值默认为第一个数和最后一个数的索引
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[min] > a[i]) min = i;
    if (a[max] < a[i]) max = i;
  }
  //对调
  int t = a[max];
  a[max] = a[min];
  a[min] = t;

  for (int i = 0; i < n; i++) cout << a[i] << " ";
  return 0;
}
