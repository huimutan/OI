/* 1039: 【入门】求三个数的最大数
题目描述
已知有三个不等的数，将其中的最大数找出来。
输入
输入只有一行，包括3个整数。之间用一个空格分开。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
1 5 8
样例输出
8
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c; //三个数
  int m;       //存储最大的数
  cin >> a >> b >> c;
  //打擂台法比出最大数
  m = a;
  if (b > m)
  {
    m = b;
  }
  if (c > m)
  {
    m = c;
  }
  cout << m << endl;

  return 0;
}
