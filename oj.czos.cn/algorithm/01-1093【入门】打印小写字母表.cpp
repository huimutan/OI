/*1093 - 【入门】打印小写字母表
题目描述
把英文字母表的小写字母按顺序和倒序打印出来。(每行13个)

输入
无

输出
输出四行

样例
输入
输出
abcdefghijklm
nopqrstuvwxyz
zyxwvutsrqpon
mlkjihgfedcba
来源
字符型

标签
字符型
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;  // 字符串
  char c;
  for (c = 'a'; c <= 'z'; c++) {
    s = s + c;
    if (c == 'm' || c == 'z') {
      s = s + '\n';  //思考：可以用endl代替吗
    }
  }
  for (c = 'z'; c >= 'a'; c--) {
    s = s + c;
    if (c == 'n') {
      s = s + '\n';
    }
  }
  cout << s;
  return 0;
}