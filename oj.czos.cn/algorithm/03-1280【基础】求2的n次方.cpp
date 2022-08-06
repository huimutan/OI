/*1280 - 【基础】求2的n次方
题目描述
求2的n次方！（0<=n<=100）

输入
从键盘读入一个整数n！
输出
请输出2的n次方！

样例
输入复制
100
输出复制
1267650600228229401496703205376
来源
高精度算法

标签
高精度算法
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000] = {1};
int main() {
  int n, k = 1;  // k存储乘积的位数
  cin >> n;
  for (int i = 0; i < n; i++) {    //循环n次，每次数组*2
    for (int j = 0; j < k; j++) {  //每一位*2
      a[j] *= 2;
    }
    for (int j = 0; j < k; j++) {  //进位
      if (a[j] >= 10) {
        a[j + 1] += a[j] / 10;
        a[j] %= 10;
      }
    }
    if (a[k] > 0) k++;  //判断是否多出一位
  }
  for (int i = k - 1; i >= 0; i--) cout << a[i];  //逆序输出
  return 0;
}
