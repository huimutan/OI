/*1103 - 【基础】字符串压缩
题目描述
输入字符串，输出压缩后的字符串。压缩的方法是把连续的相同字母压缩为"长度+字母"的形式，在本题中，单个的字母不需要压缩。

输入
一行，一个字符串,只包含小写英文字母,长度不超过255。

输出
样例
输入
aaabbbbbx
输出
3a5bx
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int i, c = 0;
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    c++;
    //如果连续相同字符结束了
    if (i == s.size() - 1 || s[i] != s[i + 1]) {
      if (c != 1) {
        cout << c << s[i];
      } else {
        cout << s[i];
      }
      c = 0;
    }
  }
}
