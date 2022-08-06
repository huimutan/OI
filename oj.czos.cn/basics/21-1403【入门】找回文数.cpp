/*1403 - 【入门】找回文数？
题目描述
James同学发现了在二维数组中有一些回文数，请编程找出这些回文数，
并按照输入的顺序输出。 （回文数指的是这个数正过来读和反过来读是同一个数的数，
比如1、8、99、252、1221等）。

输入
第一行是两个整数n和m（n和m都是4~100之间的整数），
代表接下来的二维数组有n行m列。
接下来n行，每行有m个整数，这些整数都是1~9999之间的整数。

输出
按照输入的顺序输出满足条件的回文数，每行1个。

样例
输入
3 3
1 22 98
34 121 110
100 210 323
输出
1
22
121
323
来源
二维数组

标签
二维数组
*/
//定义函数,判断-个字符串是否是回文
#include <bits/stdc++.h>
using namespace std;
bool huiwen(string s) {
  bool r = true;  //假设是回文
  //循环字符串长度的一半,如果对称位置有一个元素不等,就不是回文
  for (int i = 0; i < s.size() / 2; i++) {  // strlen(s)
    if (s[i] != s[s.size() - i - 1]) {
      r = false;
      break;
    }
  }
  return r;
}
bool hws(int x) {
  bool r = false;
  int y = 0, m = x;
  // y=x的倒序
  while (m != 0) {
    y = y * 10 + m % 10;
    m = m / 10;
  }
  if (y == x) {
    r = true;
  }
  return r;
}
int main() {
  int n, m, i, j;
  cin >> n >> m;
  int a[n][m];
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  //按照读入顺序遍历二维数组,判断是否是回文数,是就输出
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (hws(a[i][j])) {  // huiwen(to_string(a[i][j]))
        cout << a[i][j] << endl;
      }
    }
  }
  return 0;
}
