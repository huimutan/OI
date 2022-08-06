/*1142 - 【入门】素数回文数
题目描述
如果一个数从左边读和右边读都是同一个数，就称为回文数，
例如686就是一个回文数。编程求10到1000内所有的既是回文数同时又是素数的自然数。

输入
无

输出
若干个数，每行一个

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
//判断回文
bool huiwen(int n) {
  int fan = 0, x = n;  //存储相反数;处理n时保留原数
  while (x > 0) {
    fan = fan * 10 + x % 10;
    x /= 10;
  }
  return n == fan;
}
int main() {
  for (int i = 10; i <= 1000; i++) {
    if (sushu(i) && huiwen(i)) cout << i << endl;
  }
  return 0;
}
