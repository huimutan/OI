/*1023 - 【入门】判断素数
题目描述
任意输入一个整数，判断它是否为素数。是的话输出"T",不是的话输出"F".

质数（prime
number）又称素数，质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。

输入
输入只有一行，包括1个整数。（n≤109）

输出
输出只有一行。

样例
输入
57
输出
F
来源
简单循环

标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*素数(质数)：大于1的自然数中，如果该数除了 1和自己以外没有其他因子
  就是素数，如：2 3 5 7 11 13 17 19 23...
  判断素数的思路：求出n的因子个数(不含1和n),如果因子个数为0就是素数
  */
  int n, i, c = 0;
  cin >> n;
  //循环n的因子范围(如：100的因子范围)
  for (i = 2; i <= n - 1; i++) {
    //如果i是n的因子，则计数器自增
    if (n % i == 0) {
      c++;
    }
  }
  // cout << i;
  //如果n除了1和自己以外没有因子
  if (c == 0 && n > 1) {
    cout << "T" << endl;
  } else {
    cout << "F" << endl;
  }
  return 0;
}
