/*1296 - 【基础】求1!+2!+3!+4!+...+n!
题目描述
请求出1!+2!+3!+4!+...+n!，请注意，n<=50。

n!=n*(n-1)*(n-2)*...*1，如：5!=5*4*3*2*1=120。

输入
请输入一个整数n（n<=50）

输出
输出求和的结果

样例
输入复制
10
输出复制
4037913
来源
高精度算法

标签
高精度算法
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000] = {1}, ak = 1, n, b[1000], bk = 1;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < ak; j++) a[j] *= i;  //逐位乘
    for (int j = 0; j < ak + 2; j++) {       //进位,最大进2位数
      if (a[j] >= 10) {
        a[j + 1] += a[j] / 10;
        a[j] %= 10;
      }
    }
    if (a[ak + 1] != 0)
      ak += 2;  //判断进的位数
    else if (a[ak] != 0)
      ak++;
    //加到数组b里
    for (int j = 0; j < ak; j++) b[j] += a[j];
    if (ak > bk) bk = ak;
    for (int j = 0; j < bk + 1; j++) {  //进位,最大进2位数
      if (b[j] >= 10) {
        b[j + 1] += b[j] / 10;
        b[j] %= 10;
      }
    }
  }
  for (int i = bk - 1; i >= 0; i--) cout << b[i];  //逆序输出
  return 0;
}
