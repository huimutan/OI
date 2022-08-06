/*1288 - 【入门】正整数n转换为8进制
题目描述
请将一个整数n（n<=10^12）的整数转换为8进制！

输入
整数n

输出
n的8进制对应的数

样例
输入
100000
输出
303240
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;
long long n, x;  //（n<=10^12）
string s;
string t = "01234567";
int main() {
  cin >> n;
  while (n != 0) {
    x = n % 8;
    s = t[x] + s;
    n = n / 8;
  }
  cout << s;
}
