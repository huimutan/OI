/*1132 - 【入门】保留整数
题目描述
输入一个字符串str1，把其中的连续非数字的字符子串换成一个‘*’，
存入字符数组str2 中，所有数字字符也必须依次存入 str2 中。输出str2。

输入
输入为一行字符串str1，其中可能包含空格。字符串长度不超过80个字符。

输出
输出处理好的字符串str2。

样例
输入
$Ts!47&*s456  a23* +B9
输出
*47*456*23*9
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, w;
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i]))
      w += s[i];
    else if (w[(w.size() - 1)] != '*')
      w += "*";
  }
  cout << w;
  return 0;
}
