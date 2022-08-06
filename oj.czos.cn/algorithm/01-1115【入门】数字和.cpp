/*1115 - 【入门】数字和
题目描述
输入一个很大的数，求各位上的数字和。

输入
一个很大的整数（不超过200位）

输出
一个整数

样例
输入
123
输出
6
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int r;  //和，初值默认为 0
string s;
int i;
int main() {
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    r += (s[i] - '0');
  }
  cout << r;
}