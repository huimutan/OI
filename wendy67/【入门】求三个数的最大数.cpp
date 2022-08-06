/*D. 【入门】求三个数的最大数
题目描述
已知有三个不等的数，将其中的最大数找出来。
输入
输入只有一行，包括3个整数。之间用一个空格分开。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例
输入
1 5 8
输出
8
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c) {
    cout << a;
  } else if (b > a && b > c) {
    cout << b;
  } else {
    cout << c;
  }

  return 0;
}
