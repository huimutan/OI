/*. 【入门】是否适合晨练？
题目描述
夏天到了，气温太高，小明的爷爷每天有晨练的习惯，但有时候温度不适合晨练；
小明想编写一个程序，帮助爷爷判断温度是否适合晨练，
输入温度t的值，判断其是否适合晨练，适合晨练输出OK，不适合输出NO。
(20 <= t <= 30,则适合晨练OK，否则不适合NO)
输入
一个整数代表当天的温度
输出
OK或者NO
样例
输入
22
输出
OK
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  if (20 <= t &&t<= 30) {
    cout << "OK";
  } else {
    cout << "NO";
  }
  return 0;
}
