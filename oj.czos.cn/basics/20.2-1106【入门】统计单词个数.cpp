/*1106 - 【入门】统计单词个数
题目描述
输入一行字符串（字符串长度≤100），包含若干个单词，
约定相邻的两个单词用空格隔开（一个或多个空格），编程统计单词的个数。

输入
一行空格隔开的若干个单词。

输出
单词个数

样例
输入
Hello   World
输出
2
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char n[255], w[100];
  int c = 0;
  gets(n);
  for (int i = 0; i < strlen(n); i++) {
    if (n[i] != ' ' && (n[i + 1] == ' ' || n[i + 1] == '\0')) c++;
  }
  cout << c;
  return 0;
}
