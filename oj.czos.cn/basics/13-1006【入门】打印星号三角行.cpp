/*【入门】打印星号三角行
题目描述
打印星号三角行.

输入
输入只有一行，包括1个整数N。N代表行数.

输出
输出N行.

样例
输入
5
输出
    *        *        *
   ***      ***      ***
  *****    *****    *****
 *******  *******  *******
***************************
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    for (int j = 1; j <= 2 * (n - i); j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    for (int j = 1; j <= 2 * (n - i); j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
