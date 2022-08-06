/*E. 【入门】算算和是多少
题目描述
输入一个三位正整数，然后与它倒过来的数相加，输出和。
如：输入167，则和为167+761=928

输入
只有一行，一个三位正整数。

输出
一个正整数

样例
输入
167
输出
928
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int bai = x / 100;
  int shi = x / 10 % 10;
  int ge = x % 10;
  cout << bai * 100 + bai + shi * 10 * 2 + ge * 100 + ge;
  return 0;
}
