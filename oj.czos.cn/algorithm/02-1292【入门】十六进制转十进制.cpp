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
string s;
// t:表示权重，也就是16的i次方
long long r, t = 1, i;
int main() {
  cin >> s;
  //逆序计算,按权展开
  for (i = s.size() - 1; i >= 0; i--) {
    //如果s[i]是'0'~'9'
    if (isdigit(s[i])) {
      r = r + (s[i] - '0') * t;
    } else {
      r = r + (s[i] - 'A' + 10) * t;
    }
    t = t * 16;
  }
  cout << r;
}