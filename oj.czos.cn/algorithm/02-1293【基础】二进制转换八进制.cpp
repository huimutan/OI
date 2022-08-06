/*1293 - 【基础】二进制转换八进制
题目描述
请将一个100位以内的二进制整数转换为8进制整数！

输入
100位以内的二进制整数

输出
该数对应的八进制整数

样例
输入
111100001111000011110000
输出
74170360
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  //使用循环在字符串s前面补0使得字符串s的长度是3的倍数
  while (s.size() % 3 != 0) {
    s = '0' + s;
  }
  // 3个2进制数转成1个8进制数 例如：100 14+02+01=4
  for (int i = 0; i < s.size() - 2; i = i + 3) {
    cout << (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
  }
  return 0;
}