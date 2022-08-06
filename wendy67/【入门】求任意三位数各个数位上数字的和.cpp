/*A. 【入门】求任意三位数各个数位上数字的和
题目描述
对于一个任意的三位自然数X，编程计算其各个数位上的数字之和S。

输入
输入一行，只有一个整数x(100<=x<=999)  

输出
输出只有一行，包括1个整数

样例
输入
123
输出
6
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,sum=0;
  cin >> x;
  while (x>0)
  {
     sum+=x%10;
     x/=10;
  }
  cout << sum;
  return 0;
}
