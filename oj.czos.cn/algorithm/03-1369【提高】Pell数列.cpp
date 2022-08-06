/*1369 - 【提高】Pell数列
题目描述
有一种数列，它的前10项的值分别为：
1 2 5 12 29 70 169 408 985 2378，
这个数列被称为Pell数列，请问该数列的第n项的值是多少？（n<=1000）

输入
一个整数n。
输出
第n项的值。

样例
输入
10
输出
2378
来源
递推

标签
递推
*/

#include <bits/stdc++.h>
using namespace std;
string he(string s1, string s2) {  //求两个高精度的整数的和
  string r;                        //存放总和
  int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
  //逆序存入整数数组
  int i;
  for (i = 0; i < s1.size(); i++) a[i] = s1[s1.size() - i - 1] - '0';
  for (i = 0; i < s2.size(); i++) b[i] = s2[s2.size() - i - 1] - '0';
  //逐位相加，逐位进位
  int len = s1.size();
  if (s2.size() > s1.size()) len = s2.size();
  for (i = 0; i < len; i++) {  //如果是乘法，需要两次for循环
    c[i] += a[i] + b[i];
    if (c[i] >= 10) {
      c[i + 1] += c[i] / 10;
      c[i] %= 10;
    }
  }
  if (c[len]) len++;                //判断是否多出1位
  for (i = len - 1; i >= 0; i--) {  //逆序将c数组拼接乘字符串
    r += c[i] + '0';
  }
  return r;
}

int main() {
  // a[n] = a[n-1]*2 + a[n-2]
  // z：代表计算结果,xy代表z的前两项
  string x = "1", y = "2", z;
  int i, n;
  cin >> n;
  if (n == 1) {
    cout << x;
  } else if (n == 2) {
    cout << y;
  } else {
    for (i = 3; i <= n; i++) {  //从第3项开始递推
      z = he(he(y, y), x);
      //修改xy的值，逐步向后推导
      x = y;
      y = z;
    }
    cout << z;
  }
  return 0;
}