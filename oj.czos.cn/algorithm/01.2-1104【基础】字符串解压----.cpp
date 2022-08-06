/*1104 - 【基础】字符串解压
题目描述
输入压缩后的字符串，输出压缩前的字符串。压缩的方法是把连续的相同字母压缩为"长度+字母"的形式，在本题中，单个的字母不需要压缩。例如：3a5bx，解压后的结果为：aaabbbbbx；例如：12ab10c2ax解压后的结果为：aaaaaaaaaaaabccccccccccaax。

输入
压缩后的字符串
输出
解压后的字符串

样例
输入
3a5bx
输出
aaabbbbbx
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, n = "";
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i]))
      n += s[i];
    else {
      if (n == "") n = "1";
      for (int j = 0; j < stoi(n); j++) cout << s[i];
      n = "";
    }
  }
  return 0;
}
