/*1098 - 【入门】判断是否构成回文
题目描述
输入一串字符，字符个数不超过100，且以"."结束。 判断它们是否构成回文。

输入
输入只有一行，包括一串字符。（测试数据不含空格）

输出
输出只有一行，TRUE 或者FALSE 。

样例
输入
12321.
输出
TRUE
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string s1 = s;
  reverse(s.begin(), s.end() - 1);
  if (s1 == s)
    cout << "TRUE";
  else
    cout << "FALSE";
  return 0;
}
