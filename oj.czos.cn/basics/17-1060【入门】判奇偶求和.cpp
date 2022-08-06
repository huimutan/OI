/*1060 - 【入门】判奇偶求和
题目描述
输入一个正整数n,如果n是奇数,则求1-n之间所有的偶数之和；
如果n是偶数,则求n所有的约数之和(包括1和本身)。

输入
一行，一个整数n（0<n<3010)
输出
一行，一个整数。

样例
输入
89
输出
1980
来源
简单循环

标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, sum = 0;
  cin >> n;
  if (n % 2 == 1) {
    //奇数，求1-n之间所有的偶数之和1,2,3,4,5
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) sum += i;
    }
  } else {
    //偶数，求n所有的约数之和(包括1和本身)
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) sum += i;
    }
  }
/*   解法2
  for (int i = 1; i <= n; i++) {
    if (n % 2 != 0) {
      if (i % 2 == 0) sum += i;
    } else {
      if (n % i == 0) sum += i;
    }
  } */
  cout << sum << endl;
  return 0;
}
