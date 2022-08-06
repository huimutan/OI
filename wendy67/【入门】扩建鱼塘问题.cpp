/*H. 【入门】扩建鱼塘问题
题目描述
有一个尺寸为m * n的矩形鱼塘，请问如果要把该鱼塘扩建为正方形，
那么它的面积至少增加了多少平方米？（4.2.54）

输入
两个整数m和n

输出
一个整数，代表鱼塘面积增加的值

样例
输入
5 3
输出
10
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;
  if (m > n) {
    cout << (m - n) * m;
  }
  else {
    cout << (n - m) * n;
  }  
  return 0;
}
