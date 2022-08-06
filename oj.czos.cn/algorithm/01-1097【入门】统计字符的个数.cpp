/*1097 - 【入门】统计字符的个数
题目描述
从键盘中任意输入一串字符,直至输入"#"字符代表结束。请编程统计输入的字符中的大写字母,小写字母和数字字符的个数分别是多少?
输入
输入只有一行，包括一串字符。(长度小于20，且没有空格)

输出
输出只有一行，包括3个整数。分别代表大写字符，小写字符和数字字符的个数。

样例
输入
daDSALDdcada3240#
输出
5 7 4
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int c1, c2, c3;
string s;
int main() {
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    //如果是大写字母
    if (isupper(s[i])) {
      c1++;
    } else if (islower(s[i])) {
      c2++;
    } else if (isdigit(s[i])) {
      c3++;
    }
  }
  cout << c1 << " " << c2 << " " << c3;
}