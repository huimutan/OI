/*1106 - 【入门】统计单词个数
题目描述
输入一行字符串（字符串长度≤100），包含若干个单词，约定相邻的两个单词用空格隔开（一个或多个空格），编程统计单词的个数。

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
string s, w;
int c = 0;
int main() {
  getline(cin, s);
     s = " " + s;
  for (int i = 0; i < s.size(); i++) {
     if (isalpha(s[i]) && isblank(s[i - 1])) {
    //if (isalpha(s[i]) && (isblank(s[i + 1]) || i == s.size() - 1)) {
      c++;
    }
  }
  cout << c;
  return 0;
}
