/*1258 - 【入门】求一个三位数
题目描述
求这样一个三位数，该三位数等于其每位数字的阶乘之和。
即 abc = a! + b! + c! (n!表示n的阶乘,n! = 1*2*3*...*n，如：5! =1*2*3*4*5)

输入
无

输出
输出这个数

来源
简单循环

标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
//求n的阶乘
int jiecheng(int n) {
  int r = 1;
  for (int i = 1; i <= n; i++) {
    r = r * i;
  }
  return r;
}
int main() {
  /*
  思路:
  第一步:定义函数,求一个整数n的阶乘
  第二步:循环所有的三位数,判断哪些数满足条件
  */
  int i, b, s, g;
  int x, y, z;  //存放每个数的阶乘
  for (i = 100; i <= 999; i++) {
    b = i / 100;
    s = i / 10 % 10;
    g = i % 10;
    //求阶乘
    x = jiecheng(b);
    y = jiecheng(s);
    z = jiecheng(g);
    if (i == x + y + z) {
      cout << i << endl;
    }
  }
  //调用函数求阶乘的过程可以做如下简化 :
  // for (int i = 100; i <= 999; i++) {
  //   if (i == jiecheng(i / 100) + jiecheng(i / 10 % 10) + jiecheng(i % 10))
  //     cout << i << endl;
  // }
}
