/*【入门】字符图形9-数字正三角
题目描述
输入一个整数打印字符图形。

输入
一个整数（０＜Ｎ＜１０）。

输出
一个字符图形。

样例
输入
3
输出
  1
 222
33333
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
      cout << i;
    }
    cout << endl;
  }
  return 0;
}
