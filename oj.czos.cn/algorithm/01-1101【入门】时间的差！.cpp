/*1101 - 【入门】时间的差！
题目描述
看到两个标准格式的时间，有小时，有分钟，有秒，格式如：h:m:s，即 时:分:秒
你想知道，这两个时间之间相差多少吗？

输入
输入包括两行，两行均为一个“时:分:秒”格式的时间。且本题保证第一个时间一定大于第二个时间！

输出
输出就是输入的两个时间之间的秒数差。

样例
输入
01:10:10
00:30:30
输出
2380
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;

//配合自定义函数
//求一个字符串时间距离00:00:0的总秒数
int num(string s) {
  // xx:xx:xx
  // 01:10:10
  int r = 0;
  //'0'->48 '1'->49 '2'->50
  int h = (s[0] - '0') * 10 + (s[1] - '0');
  int m = (s[3] - '0') * 10 + (s[4] - '0');
  int e = (s[6] - '0') * 10 + (s[7] - '0');
  r = h * 60 * 60 + m * 60 + e;
  return r;
}
int main() {
  // 00:00:00
  // cout<<num("01:10:10");
  string s1, s2;
  cin >> s1 >> s2;
  cout << num(s1) - num(s2);
  return 0;
}
