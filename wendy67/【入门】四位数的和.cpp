/*C. 【入门】四位数的和
题目描述
请从键盘读入一个四位整数，求这个四位整数各个位的和是多少？

输入
一个四位整数n

输出
这个四位数各个位的和

样例
输入
3456
输出
18
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int qianwei = x / 1000;
  int baiwei = x / 100 % 10;
  int shiwei = x / 10 % 10;
  int gewei = x % 10;
  cout << qianwei+baiwei+shiwei+gewei;
//   cout << qianwei << baiwei << shiwei << gewei;
  return 0;
}
