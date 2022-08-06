/*F. 【入门】倒序输出一个四位整数
题目描述
任意读入一个四位整数，颠倒后输出。

输入
输入一行，只有一个整数x(1000<=x<=9999)。

输出
输出只有一行，包括1个整数。

样例
输入
4567
输出
7654
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int a = x / 1000;
  int b = x / 100 % 10;
  int c = x / 10 % 10;
  int d = x % 10;
  cout << d*1000 + c*100 + b*10 + a ;
  return 0;
}
