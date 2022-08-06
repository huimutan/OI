/*1144 - 【入门】等差素数组
题目描述
如果两个素数之和的一半仍然是一个素数，则这三个素数可以组成一个等差素数组，如（3+7）/2=5，则（3，5，7）为一个等差素数组，编程求100以内的所有等差素数组。这里列出的3
5 7是符合题目要求的第一个等差素数组（注意：本题不考虑3个数相等的情况）。

输入
无

输出
若干行，每行3个数。空格隔开！（每行的三个数从小到大排列，先按第一个数从小到大输出等差素数组，如果第一个数相同，再按第二个数从小到大输出）

来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
bool sushu(int n) {
  bool r = true;  //假设n是素数
  //循环2 ~sqrt(n), 有因子就不是素数(注意如果n<=1也不是)
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      r = false;
      break;  //停止循环
    }
  }
  if (n <= 1) {  //判断特殊情况
    r = false;
  }
  return r;
}
int main() {
  int su[101] = {0};
  for (int i = 3; i <= 100; i++) {
    if (sushu(i)) {
      su[i]++;
    }
  }
  for (int i = 3; i < 100; i++) {
    for (int j = i; j <= 100; j++) {
      if (su[i] > 0 && su[j] > 0 && j > i && sushu((i + j) / 2)) {
        cout << i << " " << (i + j) / 2 << " " << j << endl;
      }
    }
  }
  return 0;
}
