/*1146 - 【入门】求S的值
题目描述
求S=1+2+4+7+11+16……的值刚好大于等于5000时S的值。

输入
无

输出
一行，一个整数。

来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;

/*
数列：1 2 4 7 11 16
A(2)=A(1)+1 A(3)=A(2)+2 A(4)=A(3)+3
A(n)=A(n-1)+n-1
求数列的第n项的值
*/
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + n - 1;
  }
  return r;
}
int main() {
  int s = 0, i = 1;
  while (s < 5000) {
    s = s + num(i);
    i++;
  }
  cout << s << endl;
}
