/*1088 - 【入门】求两个数M和N的最大公约数
题目描述
求两个正整整数 MM 和 NN 的最大公约数(MM，NN都在长整型范围内）（5.1.42）

输入
输入一行，包括两个正整数。
输出
输出只有一行，包括1个正整数。

样例
输入
45 60
输出
15
来源
需要找规律的循环
标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
//递归:将辗转相除法，重复用递归求解
long long fun(long long a, long long b) {
  //递归停止条件:a%b==0
  if (a % b != 0) {
    return fun(b, a % b);
  } else {
    return b;
  }
}
int main() {
  long long a, b, t;
  cin >> a >> b;
  cout << fun(a, b);
}