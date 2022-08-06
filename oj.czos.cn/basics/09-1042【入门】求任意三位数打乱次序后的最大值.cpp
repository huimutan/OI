/*
1042: 【入门】求任意三位数打乱次序后的最大值
题目描述
任意输入一个三位整数，再把它的次序打乱重新组合一个新的三位整数，使其值最大。
输入
输入只有一行，包括1个整数。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
470
样例输出
740
*/

#include <iostream>
using namespace std;
int main()
{
  int a, bai, shi, ge, t;
  cin >> a;
  bai = a / 100, shi = a / 10 % 10, ge = a % 10;
  if (bai < shi)
  {
    t = bai;
    bai = shi;
    shi = t;
  }
  if (shi < ge)
  {
    t = shi;
    shi = ge;
    ge = t;
  }
  if (bai < shi)
  {
    t = bai;
    bai = shi;
    shi = t;
  }
  cout << bai * 100 + shi * 10 + ge << endl;
  return 0;
}
