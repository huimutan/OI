/*1107 - 【基础】求英文句子中的最长单词
题目描述
一个英文句子（长度不超过255），只含有字母和空格，输出最长的一个单词。如有多个长度相同的单词，则输出最前面的一个。

输入
一个字符串。
输出
一个字符串。

样例
输入
in which four coins
输出
which
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // s是英文句子字符串,w用来临时存放每个单词
  string s, w = "", max = "";
  getline(cin, s);
  s = s + " ";
  for (int i = 0; i < s.size(); i++) {  //循环每个字符
    //如果s[i]不是空格,那么就是单词的一部分,存到w中
    if (s[i] != ' ') {
      w += s[i];
    } else {
      if (w.size() > max.size()) max = w;  //如果含有a的单词长度更长
      w = "";  //清空单词，准备存放下一个单词
    }
  }
  cout << max << endl;
  return 0;
}
