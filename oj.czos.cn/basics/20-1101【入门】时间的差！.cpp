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
int main() {
  int h, m, s, t1, t2;
  char c;
  cin >> h >> c >> m >> c >> s;
  t1 = h * 3600 + m * 60 + s;
  cin >> h >> c >> m >> c >> s;
  t2 = h * 3600 + m * 60 + s;
  cout << t1 - t2;
  return 0;
}
