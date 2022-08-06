/*1281 - 【基础】求2+2*2+2*2*2+…+2*2*2*….*2
题目描述
求2+2*2+2*2*2+…+2*2*2*…*2的和是多少？最后一项有多少2相乘由键盘读入的n决定（1<=n<=100）！
比如：n=3，那么s=2+2*2+2*2*2=14！
输入
从键盘读入一个整数n（1<=n<=100）
输出
输出求出的和

样例
输入
3
输出
14
来源
高精度算法

标签
高精度算法
*/
#include <bits/stdc++.h>
using namespace std;
int a[100] = {1}, b[100];
int main() {
  int n, ak = 1, bk = 1, len;  // ak存储乘积a的位数,bk存储乘积总和b的位数
  cin >> n;
  for (int i = 0; i < n; i++) {     //循环n次，每次数组*2
    for (int j = 0; j < ak; j++) {  //每一位*2
      a[j] *= 2;
    }
    for (int j = 0; j < ak; j++) {  //进位
      if (a[j] >= 10) {
        a[j + 1] += a[j] / 10;
        a[j] %= 10;
      }
    }
    if (a[ak] > 0) ak++;  //判断是否多出一位
    //将k位的a加到s位的b
    len = ak;
    if (bk > ak) len = bk;
    for (int j = 0; j < len; j++) {
      b[j] += a[j];
      if (b[j] >= 10) {  //进位
        b[j + 1] += b[j] / 10;
        b[j] %= 10;
      }
    }
    if (b[bk] > 0) bk++;
  }
  for (int i = bk - 1; i >= 0; i--) cout << b[i];  //逆序输出
  return 0;
}