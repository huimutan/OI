/*B. 【入门】输入一个三位数，把个位和百位对调后输出
题目描述
输入一个三位自然数，然后把这个数的百位数与个位数对调，输出对调后的数

输入
输入一行，只有一个整数x(100<=x<=999)。

输出
输出只有一行，包括1个整数。

样例
输入
123
输出
321
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int baiwei = x / 100;
  int shiwei = x % 100 / 10;
  int gewei = x % 10;
  cout<< gewei*100+shiwei*10+baiwei;
  return 0;
}
