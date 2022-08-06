/*1285 - 【基础】计算N的阶乘
题目描述
请计算n的阶乘（1<=n<=100）
n的阶乘计算公式为：n!=n*(n-1)*(n-2)*...*1，如：5!=5*4*3*2*1=120

输入
一个整数n(1<=n<=100)
输出
n的阶乘

样例
输入
20
输出
2432902008176640000
来源
高精度算法

标签
高精度算法
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000] = {1}, ak = 1, n;
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
  }
  for (int i = ak - 1; i >= 0; i--) cout << a[i];  //逆序输出
  return 0;
}
