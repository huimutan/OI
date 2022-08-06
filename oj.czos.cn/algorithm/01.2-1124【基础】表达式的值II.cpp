/*1124 - 【基础】表达式的值II
题目描述
给出一个表达式，其中运算符仅包含+和-两种运算符，且没有括号。要求求出表达式的最终值。
数据保证要计算的数字的数量不超过100个，每个整数的数值和计算结果的数值都在int的范围内。
请注意：数字可能是1位数，也可能是多位数，如：1+1-1=1，12+23-11=24。

输入
仅一行，即为表达式。
输出
计算结果的数值。

样例
输入
1+1-1
输出
1
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, num;
  cin >> s;
  char p = '+';
  int x = 0;
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i])) {
      num += s[i];
    } else {
      if (p == '+') x += stoi(num);
      if (p == '-') x -= stoi(num);
      p = s[i];
      num = "";
    }
  }
  cout << x;
  return 0;
}