/*【入门】沙漏
题目描述
赵老师最近在编一个操作系统，正好编到鼠标的繁忙状态，需要一个沙漏符号，正好大家都在学C++，你的任务就是帮赵老师编一个程序打印一个沙漏符号。

输入
一个整数n，符号的行数（保证n是大于1的奇数）

输出
沙漏符号，使用“*”打印

样例
输入
5
输出
*****
 ***
  *
 ***
*****
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  n /= 2;
  for (int i = 0; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * (n - i) + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
