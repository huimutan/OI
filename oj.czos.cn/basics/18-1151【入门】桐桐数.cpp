/*1151 - 【入门】桐桐数
题目描述
桐桐很喜欢研究数字，特别喜欢研究质数。
一天，桐桐发现有一些数字可以表示成两个质数相乘的形式，
比如，10=2*5，2、5都是质数，所以10是一个“桐桐数”。
所以桐桐决定考考你，她告诉你一个数n，请你判断n是不是“桐桐数”。

输入
一个数n(1<=n<=2^31-1)。

输出
输出一行，如果n是一个“桐桐数”，则输出“It's a Tongtong number.”，否则输出“It's
not a Tongtong number.”

样例
输入
10
输出
It's a Tongtong number.
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
//判断素数
bool sushu(int n) {
  bool r = true;                        //假设是素数
  for (int i = 2; i <= sqrt(n); i++) {  //循环因子范围,找到因子就不是素数
    if (n <= 1 || n % i == 0) {  //注意判断特殊情况
      r = false;
      break;
    }
  }
  return r;
}

int main() {
  int n;
  cin >> n;
  bool f = false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (sushu(i) && n % i == 0 && sushu(n / i)) {
      f = true;
      break;
    }
  }
  if (f)
    cout << "It's a Tongtong number.";
  else
    cout << "It's not a Tongtong number.";
  return 0;
}
