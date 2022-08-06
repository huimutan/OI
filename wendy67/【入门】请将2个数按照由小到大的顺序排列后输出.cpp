/*C. 【入门】请将2个数按照由小到大的顺序排列后输出
题目描述
从键盘读入两个整数a和b，将这两个数按照由小到大的顺序输出；

输入
输入任意的两个整数，用空格隔开

输出
输出只有1行，按照由小到大的顺序输出2个整数，用空格隔开

样例
输入
2 1
输出
1 2
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << b << ' ' << a;
  } else {
    cout << a << ' ' << b;
  }

  return 0;
}
