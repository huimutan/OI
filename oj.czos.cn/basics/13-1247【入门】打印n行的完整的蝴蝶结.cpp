/*【入门】打印n行的完整的蝴蝶结
题目描述
请从键盘读入一个整数n（n是1~10的范围内的奇数），打印出如下图所示的n行的完整的蝴蝶结！

比如，n=5，则打印图形如下：
*    *
**  **
******
**  **
*    *

输入
一个整数n，代表图形的行数！

输出
n行的图形！

样例
输入
5
输出
*    *
**  **
******
**  **
*    *
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  n /= 2;
  for (int i = 1; i <= n + 1; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (n - i) + 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (n - i) + 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
