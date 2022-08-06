/*1291 - 【入门】八进制转十进制
题目描述
请将一个20位以内的八进制数转换为十进制整数

输入
20位以内的八进制数
输出
该数对应的十进制数

样例
输入
77777777777777777777
输出
1152921504606846975
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;
string s;
long long r, t = 1;  // t:表示权重
int main() {
  cin >> s;
  for (int i = s.size() - 1; i >= 0; i--) {
    r += (s[i] - '0') * t;
    t *= 8;
  }
  cout << r;
}