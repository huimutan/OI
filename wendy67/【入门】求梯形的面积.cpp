/*F. 【入门】求梯形的面积
题目描述
梯形面积的求解公式为 S = (a + b) * h / 2。从键盘读入一个梯形的上底a、下底b和高h，请计算表梯形的面积。（结果保留1位小数）（5.1.15）



输入
三个整数a、b、h

输出
梯形的面积

样例
输入
2 3 5
输出
12.5
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, h;
  cin >> a >> b >> h;
  printf("%.1f", (a + b) * h / 2.0);
  return 0;
}
