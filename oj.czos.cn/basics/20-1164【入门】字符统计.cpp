/*1164 - 【入门】字符统计
题目描述
输入一串小写字母(以‘.’为结束标志)，
统计出每个字母在该字符串中出现的次数(若某字母不出现，则不要输出)。
要求：每行输出5项，每项以空格隔开。

输入
输入一行以'.'结束的字符串（字符串长度≤100）

输出
输出相应小写字母的个数。

样例
输入
aaaabbbccc.
输出
a:4 b:3 c:3
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;  //字符串
  cin >> s;
  int c[126] = {0};  //统计字符串中字母出现次数
  // for (int i = 0; i < s.size() - 1; i++) {
  for (int i = 0; s[i]; i++) {
    c[s[i]]++;
  }
  int x = 0;                         // 5组结果就换行
  for (int i = 97; i <= 122; i++) {  //小写字母是从97~122,排除了.结尾
    // cout << c[i];
    if (c[i] != 0) {
      cout << char(i) << ':' << c[i];
      x++;
      if (x % 5 == 0)
        cout << endl;
      else
        cout << " ";
    }
  }
  return 0;
}
