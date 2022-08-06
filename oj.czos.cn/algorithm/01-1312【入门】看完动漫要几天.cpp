/*题目描述
一部完整的动漫共有m分钟（m<=1000）。为了保护视力，妈妈决定让小明同学每天从xx:xx分看到xx:xx分，请问小明同学需要几天才能看完这部完整的动漫。（4.1.15）

输入
3行，第一行是一个整数m代表动漫的总分钟数；第二行表示每天看动漫的开始时间，第三行表示每天看动漫的结束时间。（确保输入的开始时间
< 结束时间）

输出
一个整数，代表小明看完动漫至少需要花的总天数。

样例
输入
288
17:00
17:32
输出
9
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int time2t(string time) {
  int x = time.find(':');
  string s1 = time.substr(0, x);
  string s2 = time.substr(x + 1, time.size());
  return stoi(s1) * 60 + stoi(s2);
}
int main() {
  int m;
  string t1, t2;
  cin >> m >> t1 >> t2;
  // cout << time2t(t1) << time2t(t2);
  cout << ceil(m * 1.0 / ((time2t(t2) - time2t(t1))));
  return 0;
}
