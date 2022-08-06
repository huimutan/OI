/*1150 - 【基础】求完全数的个数
题目描述
一个正整数若等于全部因子的和，则称此数为完全数。例如：6有因子1,2,3。同时6=1+2+3，所以6是完全数。

输入
一个正整数 N(10 ≤N ≤100000)
输出
小于等于N的完全数的个数。

样例
输入
10
输出
1
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
int wanquan(int n) {
  int s = 0;
  for (int i = 2; i <= sqrt(n); i++) {  //两种方法
    if (n % i == 0) {
      if (i == n / i)
        s += i + 1;
      else
        s = s + i + 1 + n / i;
    }
  }
  return s;
}
int main() {
  int n, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    // cout << wanquan(i) << " " << i << endl;
    if (wanquan(i) == i) {
      c++;
    }
  }
  cout << c;
  return 0;
}
