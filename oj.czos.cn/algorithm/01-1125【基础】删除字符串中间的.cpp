/*1125 - 【基础】删除字符串中间的*
题目描述
输入一个字符串，将串前和串后的*保留，而将中间的*删除。

输入
一个含*的字符串。

输出
删除了串中的*的字符串。

样例
输入
***ABC123**123*abc***********
输出
***ABC123123abc***********
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, s3;
  cin >> s;
  int i = 0, j = s.size() - 1;
  while (s[i] == '*') {
    cout << '*';
    i++;
  }
  while (s[j] == '*') {
    s3 += '*';
    j--;
  }
  for (int k = i; k <= j; k++) {
    if (s[k] != '*') cout << s[k];
  }
  cout << s3;
  return 0;
}
