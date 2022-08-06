/*1102 - 【入门】字符串中的空格移位
题目描述
输入一个字符串，将其中的所有空格都移到最前面，然后输出。

输入
一个字符串。如：a□b□c（为了能看清空格，□代表一个空格，但实际测试数据中不用□表示空格）

输出
空格全部移到了串前的字符串。如：□□abc

样例
输入
a b c
输出
  abc
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, s1;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ')
      cout << ' ';
    else
      s1 += s[i];
  }
  cout << s1;
  return 0;
}
