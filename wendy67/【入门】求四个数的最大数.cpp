/*H. 【入门】求四个数的最大数
题目描述
已知有四个不等的数，将其中的最大数找出来。
输入
输入只有一行，包括4个整数。之间用一个空格分开。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例
输入
1 9 8 6
输出
9
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > b && a > c && a > d) {
    cout << a;
  } else if (b > a && b > a && b > d) {
    cout << b;
  } else if (c > a && c > b && c > d) {
    cout << c;
  } else {
    cout << d;
  }

  return 0;
}
