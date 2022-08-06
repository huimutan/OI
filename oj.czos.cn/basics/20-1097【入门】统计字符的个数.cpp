/*
1097 - 【入门】统计字符的个数
题目描述
从键盘中任意输入一串字符,直至输入"#"字符代表结束。请编程统计输入的字符中的大写字母,小写字母和数字字符的个数分别是多少?
输入
输入只有一行，包括一串字符。(长度小于20，且没有空格)
输出
输出只有一行，包括3个整数。分别代表大写字符，小写字符和数字字符的个数。

样例
输入复制
daDSALDdcada3240#
输出复制
5 7 4
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*思路：遍历字符数组的每个字符，逐个判断是大写、小写还是数字*/
  char s[30];
  // d：统计大写，x：统计小写，n：统计数字
  int i, d = 0, x = 0, n = 0;
  //读入
  gets(s);
  //循环每个字符,逐个判断类型
  for (i = 0; i < strlen(s); i++) {
    //如果是大写字符
    if (s[i] >= 'A' && s[i] <= 'Z') {
      d++;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      x++;
    } else if (s[i] >= '0' && s[i] <= '9') {
      n++;
    }
  }
  cout << d << " " << x << " " << n << endl;
}

