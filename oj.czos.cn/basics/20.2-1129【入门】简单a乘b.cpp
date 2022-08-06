/*1129 - 【入门】简单a*b
题目描述
按照a*b = 的格式输入算式，通过计算输出a*b的结果。

输入
输入中包括一个表达式，如：a*b=，a和b都是int类型的正整数。

输出
结果只有一个正整数，整数在long long范围内。

样例
输入
100*200=
输出
20000
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, w[2] = {""};  // w为空字符串数组
  cin >> s;
  for (int i = 0, j = 0; i < s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9')
      w[j] += s[i];  //两个数字分别存到w[0]和w[1]
    else {
      j++;
    }
  }
  cout << stoll(w[0]) * stoll(w[1]);  //字符串转换为长整数long long
  return 0;
}
