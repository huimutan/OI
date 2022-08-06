/*题目描述
将一个长度小于10位的数字串拆成2段，使其和为最小的素数。
例如数字串‘13304’
拆的方法有:
1 + 3304 = 3305
13 + 304 = 317
133 + 04 = 137
1330 + 4 = 1334
从上面可看出，和为素数的有：317 与137，最小的是137

输入
一个长度小于10的数字串
输出
最小的和为素数的数，若无素数则输出 -1

样例
输入
13304
输出
137
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
//定义函数，判断素数
bool sushu(int n) {
  bool f = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0 || n <= 1) {
      f = false;
      break;
    }
  }
  return f;
}
int main() {
  string s, s1, s2;
  int x, y, mi = INT_MAX;
  cin >> s;
  //将整数s截取出2个子字符串,穷举所有可能的求和方案
  for (int i = 0; i < s.size() - 1; i++) {
    s1 = s.substr(0, i + 1);
    s2 = s.substr(i + 1);
    // cout << s1 << " " << s2 << endl;
    x = stoi(s1);
    y = stoi(s2);
    // cout << x + y << " " << sushu(x + y) << endl;
    if (sushu(x + y) && x + y < mi) {
      mi = x + y;
    }
  }
  if (mi == INT_MAX) {
    cout << -1;
  } else {
    cout << mi;
  }
}