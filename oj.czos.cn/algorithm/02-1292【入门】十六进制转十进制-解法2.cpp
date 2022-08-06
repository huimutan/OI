/*1292 - 【入门】十六进制转十进制
题目描述
请将一个不超过10位的十六进制正整数转换为十进制整数！

输入
10位以内的十六进制正整数

输出
该数对应的十进制整数

样例
输入
2ECF
输出
11983
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;
long long r, i, t = 1;  // t:表示权重，也就是16的i次方
string s, n16 = "0123456789ABCDEF";
int main() {
  cin >> s;
  for (i = s.size() - 1; i >= 0; i--) {  //逆序计算,按权展开
    r += (n16.find(s[i])) * t;
    t = t * 16;
  }
  cout << r;
}