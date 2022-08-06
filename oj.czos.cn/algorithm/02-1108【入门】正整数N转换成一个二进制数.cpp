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
#include <bits/stdc++.h>
using namespace std;
string s;  // s = "1010"
int n, x;
char c;
int main() {
  cin >> n;
  while (n != 0) {
    x = n % 2;  // x:0,1
    c = x + '0';
    //结果逆序连接为字符串
    s = c + s;
    n = n / 2;
  }
  if (s == "")
    cout << 0;
  else
    cout << s;
  return 0;
}