/*1111 - 【基础】找最长单词
题目描述
编写程序，根据给出的一个结束于'.'的字符字串，找出其中最长的含有字母'a'的子串。

输入
一行，为一个字符字串，结束于句点'.'。字串中的子串由一个或几个空格隔开。

输出
一行。显示找出的最长的含有字母'a'的子串。如果有多个这样的子串，只显示其中的第一个；若没有含字母'a'的子串，则显示'NO'。

样例
输入
Her  name is Lilan   and she  is a  happy  student.
输出
Lilan
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
  bool isa = false;  //是否含有a
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {  //循环每个字符
    //如果s[i]不是空格,那么就是单词的一部分,存到w中
    if (s[i] != ' ' && s[i] != '.') {
      w += s[i];
      if (s[i] == 'a') isa = true;
    } else {
      if (w.size() > max.size() && isa) max = w;  //如果含有a的单词长度更长
      w = "";  //清空单词，准备存放下一个单词
      isa = false;
    }
  }
  if (max == "")
    cout << "NO";
  else
    cout << max << endl;
  return 0;
}
