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
int main() {
  int x = 1, s = 0;
  for (int i = 1; s < 5000; i++) {
    s = s + x;
    //递推：A(n)=A(n-1)+(n-1)
    x = x + i;
  }
  cout << s;
  return 0;
}
