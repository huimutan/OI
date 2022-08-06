/*1143 - 【入门】纯粹合数
题目描述
一个合数，去掉最低位，剩下的数仍是合数，再去掉剩下的数的最低位，
余留下来的数还是合数，这样反复，一直到最后剩下的一位数仍是合数；
我们把这样的数称为纯粹合数。求所有的三位纯粹合数。

输入
无
输出
若干个3位数 每行一个（从小到大）

来源
函数问题

标签
函数问题
*/
//判断合数
#include <bits/stdc++.h>
using namespace std;
bool heshu(int n) {
  bool r = false;                       //假设不是合数
  for (int i = 2; i <= sqrt(n); i++) {  //循环因子范围
    if (n % i == 0) {
      r = true;
      break;
    }
  }
  return r;
}
int main() {
  // cout << heshu(8);
  for (int i = 100; i <= 999; i++) {
    if (heshu(i) && heshu(i / 10) && heshu(i / 100)) cout << i << endl;
  }
  return 0;
}
