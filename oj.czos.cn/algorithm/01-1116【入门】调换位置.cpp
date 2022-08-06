/*1116 - 【入门】调换位置
题目描述
将用逗号隔开的两个英语单词交换位置输出。

输入
一行以逗号隔开的两个英文单词。（字符串长度不超过100）

输出
将两个单词交换后输出的结果

样例
输入
abc,de
输出
de,abc
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //思路：将逗号之后的单词截取(substr)出来，将逗号之前的单词截取，交换位置输出。
  string s, s1, s2;
  cin >> s;
  int p = s.find(",");
  s1 = s.substr(0, p);
  s2 = s.substr(p + 1);
  cout << s2 << "," << s1;
  return 0;
}
