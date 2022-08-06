/*E. 【入门】求任意三位数打乱次序后的最大值
题目描述
任意输入一个三位整数，再把它的次序打乱重新组合一个新的三位整数，
使其值最大。
输入
输入只有一行，包括1个整数。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例
输入
470
输出
740
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, a, b, c, i;
  cin >> x;
  a = x / 100, b = x / 10 % 10, c = x % 10;
  if (a < b) {
    i = a;
    a = b;
    b = i;
  }
  if (b < c) {
    i = b;
    b = c;
    c = i;
  }
  if (a < b) {
    i = a;
    a = b;
    b = i;
  }
  cout << a * 100 + b * 10 + c << endl;

  return 0;
}
