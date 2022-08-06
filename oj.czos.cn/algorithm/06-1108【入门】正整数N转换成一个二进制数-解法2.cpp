/*1108 - 【入门】正整数N转换成一个二进制数
题目描述
输入一个不大于32767的整数n，将它转换成一个二进制数。

输入
输入只有一行，包括一个整数n(0<=n<=32767)
输出
输出只有一行。

样例
输入
100
输出
1100100
来源
字符串 进制转换

标签
字符串进制转换
*/
//解法二:通过层层累加计算结果，层层返回
#include <bits/stdc++.h>
using namespace std;
//递归将n除2
string fun(int n) {
  char c;
  //递归条件:n!=0
  if (n != 0) {
    c = n % 2 + '0';
    return fun(n / 2) + c;
  } else {
    return "";
  }
}
int main() {
  int n;
  cin >> n;
  if (n == 0)
    cout << 0;
  else
    cout << fun(n);
}