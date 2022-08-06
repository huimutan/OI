/*1096 - 【入门】打印字母塔
题目描述
输入行数N,打印图形.

输入
输入只有一行，包括1个整数。(N<=15)

输出
输出有N行.

样例
输入
3
输出
  A
 BAB
CBABC
来源
字符型

标签
字符型
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    //输出空格
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    //从大到小的数
    for (int j = 1; j <= i; j++) {
      cout << char(i - j + 'A');
    }
    //从小到大的数
    for (int j = 1; j < i; j++) {
      cout << char(j + 'A');
    }
    cout << endl;
  }
  return 0;
}
