/*1002 - 【入门】编程求解1+2+3+...+n
题目描述
编程求解下列式子的值：S=1+2+3+...+n
输入
输入一行，只有一个整数n(1<=n<=1000)

输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。

样例
输入
100
输出
5050
来源
简单循环

标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int n;  //表示求和范围
//有返回值，通过层层累加，将和返回
int fun(int i) {
  if (i <= n) {
    return i + fun(i + 1);
  } else {
    return 0;
  }
}
int main() {
  cin >> n;
  //从1开始递归
  cout << fun(1);
}