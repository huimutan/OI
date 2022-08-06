/*A. 【入门】请问一个整数n能够被2、3、5、7中哪些数整除
题目描述
从键盘读入一个整数n，请问n能够被2、3、5、7中哪些数整除，
从小到大依次输出n能够整除的数，每行一个。
如：
输入：20
输出：
2
5
输入
一个整数n（n<=10000）
输出
n能够整除的数
样例
输入
20
输出
2
5
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n % 2 == 0) cout << 2 << endl;
  if (n % 3 == 0) cout << 3 << endl;
  if (n % 5 == 0) cout << 5 << endl;
  if (n % 7 == 0) cout << 7;

  return 0;
}
