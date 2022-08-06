/*D. 【入门】求三个数的大小顺序
题目描述
输入三个数，按由大到小顺序打印出来。
输入
输入只有一行，包括3个整数。之间用一个空格分开。
输出
输出只有一行，包括3个整数。之间用一个空格分开。
样例
输入
3 8 2
输出
8 3 2
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c && b > c) {
    cout << a << " " << b << " " << c;
  } else if (a > b && a > c && b < c) {
    cout << a << " " << c << " " << b;
  } else if (b > a && b > c && a > c) {
    cout << b << " " << a << " " << c;
  } else if (b > a && b > c && a < c) {
    cout << b << " " << c << " " << a;
  } else if (c > a && c > b && a > b) {
    cout << c << " " << a << " " << b;
  } else {
    cout << c << " " << b << " " << a;
  }

  return 0;
}
