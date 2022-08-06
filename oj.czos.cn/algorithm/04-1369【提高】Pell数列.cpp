/*1369 - 【提高】Pell数列
题目描述
有一种数列，它的前10项的值分别为：1 2 5 12 29 70 169 408 985
2378，这个数列被称为Pell数列，请问该数列的第n项的值是多少？（n<=1000）

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
/*
An = A(n-1)*2 + A(n-2)
*/
//求两个高精度的整数的和
string he(string s1, string s2) {
  string r;  //存放总和
  int a[1000] = {0};
  int b[1000] = {0};
  int c[1000] = {0};
  //逆序存入整数数组
  int i;
  for (i = 0; i < s1.size(); i++) {
    a[i] = s1[s1.size() - i - 1] - '0';
  }
  for (i = 0; i < s2.size(); i++) {
    b[i] = s2[s2.size() - i - 1] - '0';
  }
  //逐位相加,逐位进位
  int len = s1.size();
  if (s2.size() > s1.size()) len = s2.size();

  for (i = 0; i < len; i++) {
    c[i] = c[i] + a[i] + b[i];
    if (c[i] >= 10) {
      c[i + 1] = c[i + 1] + c[i] / 10;
      c[i] = c[i] % 10;
    }
  }
  //判断是否多出1位
  if (c[len] != 0) len++;
  //逆序将c数组拼接乘字符串
  for (i = len - 1; i >= 0; i--) {
    //将 c[i]+'0'这个 ascii 码强制转换为 char 类型
    r = r + (char)(c[i] + '0');
  }
  return r;
}
//求一个高精度的整数 * 2 的积
string cheng(string s) {
  string r;
  int a[1000] = {0};
  int i;
  //逆序存入a 数组
  for (i = 0; i < s.size(); i++) {
    a[i] = s[s.size() - i - 1] - '0';
  }
  //逐位*2
  for (i = 0; i < s.size(); i++) {
    a[i] = a[i] * 2;
  }

  //逐位进位
  for (i = 0; i < s.size(); i++) {
    if (a[i] >= 10) {
      a[i + 1] = a[i + 1] + a[i] / 10;
      a[i] = a[i] % 10;
    }
  }
  //判断是否多一位
  int len = s.size();
  if (a[len] != 0) len++;
  //逆序拼接到字符串r上
  for (i = len - 1; i >= 0; i--) {
    r = r + to_string(a[i]);
  }
  return r;
}
int main() {
  // z:代表计算结果,xy 代表 z 的前两项
  string x, y, z;
  int i, n;
  cin >> n;
  // A(n)=A(n-1)*2+A(n-2)
  x = "1";
  y = "2";
  if (n == 1) {
    cout << x;
  } else if (n == 2) {
    cout << y;
  } else {
    //从第 3 项开始递推
    for (i = 3; i <= n; i++) {
      z = he(cheng(y), x);
      //修改 xy 的值，逐步向后推导
      x = y;
      y = z;
    }
    cout << z;
  }
}