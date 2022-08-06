/*【入门】求长方形的周长和面积
题目描述
从键盘读入2个整数，分别代表一个长方形的长和宽，请计算长方形的周长和面积；

输入
从键盘读入2个整数，用空格隔开

输出
输出有2行，第1行代表周长，第2行代表面积

样例
输入
2 3
输出
10
6
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << (a + b) * 2 << endl;
  cout << a * b;
  return 0;
}
