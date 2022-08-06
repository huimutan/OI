/*1120 - 【入门】倒置输出字符串
题目描述
随机输入一个长度不超过255的字符串，将其倒置后输出。

输入
只有一行。（测试数据不含空格）

输出
只有一行，输出倒置后的字符串。

样例
输入
asdfghjkl123456
输出
654321lkjhgfdsa
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // string s;
  // cin >> s;
  // reverse(s.begin(), s.end());
  // cout << s;

  char c[255];
  cin >> c;
  for (int i = strlen(c) - 1; i >= 0; i--) {
    cout << c[i];
  }

  return 0;
}
