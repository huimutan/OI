/*1140 - 【基础】亲密数对
题目描述
键盘输入N，N在2至2000之间，求2至N中的亲密数对，
就是A的因子和等于B，B的因子和等于A，且A≠B。
如48和75是亲密数对。48的因子和为2+3+4+6+8+12+16+24=75，
而75的因子和为3+5+15+25=48。

输入
只有一行，为一个整数N（ 2<=N<=2000 ）

输出
输出若干行，每行两个整数（用一个空格隔开）。

样例
输入
200
输出
48 75
75 48
140 195
195 140
说明
请注意，求出的亲密数对的2个数都不应该超过n的范围。

来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
int yinzisum(int n) {
  int sum = 0;
  // for (int i = 2; i < n; i++) {
  //   if (n % i == 0) sum += i;
  // }
  for (int i = 2; i < sqrt(n); i++) {  //加速后，把因子对都加到和里面
    if (n % i == 0) {
      if (i != n / i) {
        sum += i + n / i;
      } else {
        sum += i;
      }
    }
  }
  return sum;
}
int main() {
  int N;
  cin >> N;
  // cout << yinzisum(N);
  for (int i = 2; i < N; i++) {
    int j = yinzisum(i);
    if (i != j && yinzisum(i) == j && yinzisum(j) == i && j <= N)
      cout << i << " " << j << endl;
  }
  return 0;
}
