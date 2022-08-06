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
//有返回值，通过输入参数，层层累加，最后返回这个求和的输入参数
int fun(int i, int s) {
  if (i <= n) {
    return fun(i + 1, s + i);
  } else {
    return s;
  }
}

int main() {
  cin >> n;
  //从1开始递归，初始的和为0
  cout << fun(1, 0);
}