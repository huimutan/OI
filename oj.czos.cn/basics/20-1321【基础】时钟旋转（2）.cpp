/*1321 - 【基础】时钟旋转（2）
题目描述
时钟从时间：xx:xx（xx时xx分），
走到时间：xx:xx（xx时xx分），
时针共旋转了多少度？
（假设第一个时间<=第二个时间，2个时间都是12小时制，
且两个时间的时间差不超过12小时，
也就是说时针旋转的度数在360度之内，
也就是 1 <= 时间1 <= 时间2 <= 12（4.2.4）

输入
2行，第一行为起始时间（如：01:00），第二行为结束时间（如：01:05）

输出
时针旋转的度数（结果保留1位小数）

样例
输入
01:00
01:05
输出
2.5
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a1, a2, b1, b2;
  char s;
  cin >> a1 >> s >> a2 >> b1 >> s >> b2;
  // cout << a1 << " " << a2 << " " << b1 << " " << b2;
  double a = a1 + a2 / 60.0;
  double b = b1 + b2 / 60.0;
  cout << fixed << setprecision(1) << (b - a) * 30;
  return 0;
}
