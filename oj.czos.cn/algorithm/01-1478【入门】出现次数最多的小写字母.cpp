/*1478 - 【入门】出现次数最多的小写字母
题目描述
输入一个由小写字母组成的字符串（字符数量<=100），输出出现次数最多的小写字母。
注意：如果有多个小写字母出现的次数一样多，则输出ASCII码值最大的那个字母。
输入
一个字符串

输出
出现次数最多的小写字母
样例
输入
aaabbbbbbbbbcdxs
输出
b
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int ch[26] = {0};
  int ma = 0;
  for (int i = 0; i < s.size(); i++) {
    ch[s[i]]++;
  }
  for (int i = 0; i < 26; i++) {
    if (ch[i] >= ch[ma]) ma = i;
  }
  char x = 'a' + ma;
  cout << x;
  return 0;
}
