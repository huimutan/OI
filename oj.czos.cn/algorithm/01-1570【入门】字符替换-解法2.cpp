/*1570 - 【入门】字符替换
题目描述
把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。

输入
只有一行，由一个字符串和两个字符组成，中间用单个空格隔开。字符串是待替换的字符串，字符串长度小于等于100个字符，且不含空格等空白符；
接下来一个字符为需要被替换的特定字符；
接下来一个字符为用于替换的给定字符。

输出
一行，即替换后的字符串。

样例
输入
hello-how-are-you o O
输出
hellO-hOw-are-yOu
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //当s中含有字符c1时，替换为字符c2
  string s;
  string c1, c2;
  cin >> s >> c1 >> c2;
  int p = s.find(c1);
  while (p != -1) {
    s.replace(p, 1, c2);
    p = s.find(c1);
  }
  cout << s;
}
