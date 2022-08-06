/*1359 - 【基础】八进制转换二进制
题目描述
请将一个100位以内的8进制整数转换为2进制整数！

输入
100位以内的8进制整数
输出
该数对应的2进制整数

样例
输入
12376532347173217361
输出
1010011111110101011010011100111001111011010001111011110001
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;

long long n2shi(string s, int jin) {  //其他进制数转为10进制
  long long r = 0, t = 1;             // t:表示权重
  for (int i = s.size() - 1; i >= 0; i--) {
    r += (s[i] - '0') * t;
    t *= jin;
  }
  return r;
}

string shi2n(long long n, int jin) {  // 10进制转为其他进制数
  string t = "0123456789ABCDEF", r = "";
  if (n == 0)
    r = '0';
  else {
    while (n != 0) {
      r = t[n % jin] + r;
      n /= jin;
    }
  }
  return r;
}

int main() {
  string s;
  cin >> s;
  cout << shi2n(n2shi(s, 8), 2);
}
