/*1339 - 【提高】求多个分数的和
题目描述
从键盘读入一个求和算式，求出多个分数的和，结果也用分数表达，并约分到最简形式。

如，从键盘读入1/12+5/12+1/3，则输出：5/6。

（5.1.107）

输入
分数求和表达式；表达式中出现的数字都是正整数（值在1~100之间）
输出
和的分数形式；本题测试数据保证计算结果的分子和分母，都在1~1000的范围内。

样例
输入
1/12+5/12+1/3
输出
5/6
说明
注意考虑多个分数的和为整数的情况如:1/3+1/3+1/3=1

来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {  //辗转相除求最大公约数
  if (a % b == 0) return b;
  return gcd(b, a % b);
}
// 求两个分数的和，结果为分数
string he(string s1, string s2) {
  // 1/12
  //   0123
  string r;
  int x1, y1, x2, y2, x, y;
  int p1 = (int)s1.find('/');
  int p2 = (int)s2.find('/');
  x1 = stoi(s1.substr(0, p1));
  y1 = stoi(s1.substr(p1 + 1, s1.size() - 1 - p1));
  x2 = stoi(s2.substr(0, p2));
  y2 = stoi(s2.substr(p2 + 1, s2.size() - 1 - p2));
  y = y1 * y2;
  x = x1 * y2 + x2 * y1;
  // 求最大公约数
  int m = gcd(x, y);
  x = x / m;
  y = y / m;
  return to_string(x) + "/" + to_string(y);
}
string s, r, sum = "0/1";
int i;
int main() {
  //    cout<<he("1/12", "5/12");
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    if (s[i] != '+') {
      r += s[i];
      if (i == s.size() - 1 || s[i + 1] == '+') {
        //                cout<<r<<endl;
        sum = he(sum, r);
        r.clear();
      }
    }
  }
  //    cout<<sum<<endl;
  int sum_x, sum_y;
  int p = (int)sum.find('/');
  sum_x = stoi(sum.substr(0, p));
  sum_y = stoi(sum.substr(p + 1, sum.size() - 1 - p));
  if (sum_x == sum_y) {
    cout << 1 << endl;
  } else if (sum_x % sum_y == 0) {
    cout << sum_x / sum_y << endl;
  } else {
    cout << sum << endl;
  }
  return 0;
}