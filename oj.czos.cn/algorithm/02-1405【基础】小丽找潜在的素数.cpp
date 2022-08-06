/*1405 - 【基础】小丽找潜在的素数？
题目描述
小丽同学在编程中学到了二进制数的概念，她发现，有些二进制数，
如果转为10进制，就是素数，小丽把这些数称为潜在的素数；
比如2进制1101011，转为10进制后为107，就是素数。
请编程帮小丽找出，哪些二进制数转为10进制后，是素数，计算出这样的数有多少个？

输入
第一行是一个整数n（10<=n<=100）
接下来n行，每行是一个30位以内的2进制数

输出
一个整数代表所有转为10进制后是素数的2进制数的个数

样例
输入
6
1010000
1011
1101001
10111
111
1101011
输出
4
来源
进制转换

标签
进制转换
*/
#include <bits/stdc++.h>
using namespace std;
bool sushu(int n) {
  bool r = true;                        //假设是素数
  for (int i = 2; i <= sqrt(n); i++) {  //循环因子范围,找到因子就不是素数
    if (n <= 1 || n % i == 0) {  //注意判断特殊情况
      r = false;
      break;
    }
  }
  return r;
}

long long nto10(string s, int jin) {  //其他进制数转为10进制
  long long r = 0, t = 1;             // t:表示权重
  for (int i = s.size() - 1; i >= 0; i--) {
    r += (s[i] - '0') * t;
    t *= jin;
  }
  return r;
}

int main() {
  int n, c = 0;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (sushu(nto10(s, 2))) c++;
  }
  cout << c;
  return 0;
}
