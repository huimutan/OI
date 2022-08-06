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
int n;
int s;  // s默认初始值0
//递归数出1~n之间所有的数
void fun(int i) {
  if (i <= n) {
    // cout<<i<<endl;
    s += i;
    fun(i + 1);
  }
}
int main() {
  cin >> n;
  fun(1);
  cout << s;
}