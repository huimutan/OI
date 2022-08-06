/*1131 - 【入门】删除指定字符
题目描述
从键盘输入一个字符串str和一个字符c，删除str中的所有字符c并输出删除后的字符串str。

输入
第一行是一个字符串，字符串不含空格，长度≤100；
第二行是一个字符。


输出
删除指定字符后的字符串。

样例
输入
sdf$$$sdf$$
$
输出
sdfsdf
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str, str2 = "";
  char c;
  cin >> str >> c;
  for (int i = 0; str[i]; i++) {
    if (c != str[i]) str2 += str[i];
  }
  cout << str2;
  return 0;
}
