/*F. 【入门】判断三个整数是否相邻
题目描述
判断三个整数是否相邻，是输出"TRUE"，否则输出"FALSE"。
输入
输入只有一行，包括3个整数。
输出
输出只有一行。
样例
输入
1 3 2
输出
TRUE
说明
三个整数不一定是有序的，例如：1 3 2，是相邻的数！
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d=0;
  cin >> a >> b >> c ;
  if (a < b) {
    d = a;
    a = b;
    b = d;
  }
  if (b < c) {
    d = b;
    b = c;
    c = d;
  }
  if (a < b) {
    d = a;
    a = b;
    b = d;
  }
  if (a - b == 1 && b - c == 1) {
    cout << "TRUE";
  } else {
    cout << "FALSE";
  }

  return 0;
}
