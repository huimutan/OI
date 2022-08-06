/*【基础】挑战赛第二题——放大的X
题目描述
请你编程画一个放大的'X'（大写字母）。
如3*3的'X'应如下所示：
 X X
  X
 X X

5*5的'X'如下所示：
X   X
 X X
  X
 X X
X   X

输入
有一个正奇数n（3 <= n <= 79），表示放大的规格。

输出
打印一个规格为n * n放大的'X'

样例
输入
5
输出
X   X
 X X
  X
 X X
X   X
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*1.先打印实心的沙漏X
  2.判断每一行，只有第1个和最后一个字符是X,其余空格 */
  int n;
  cin >> n;
  n = n / 2;
  for (int i = 0; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (n - i) * 2 + 1; j++) {
      if (j == 1 || j == (n - i) * 2 + 1) {
        cout << "X";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (n - i) * 2 + 1; j++) {
      if (j == 1 || j == (n - i) * 2 + 1) {
        cout << "X";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
