/*1245 - 【入门】求s=a+aa+aaa+aaaa+aa...a的值
题目描述
求s=a+aa+aaa+aaaa+aa...a的值，其中a从键盘读入。
比如：读入2，则s=2+22=24。再比如：读入5，s=5+55+555+5555+55555=61725

输入
一个整数a（a在1~9的范围内）
输出
整数n代表这个算式的结果

样例
输入
2
输出
24
来源
函数问题 递归

标签
函数问题递归
*/
#include <bits/stdc++.h>
using namespace std;
int f(int n) {
  int a = n;
  if (n == 1)
    return 1;
  else
    return pow(10, n - 1) + f(n - 1);
  // result = num * 1 + num * 11 + num * 111
}
int count(int c, int num) {  // c输入相加的次数;num所要相加的数字
  if (c == 1) {
    return num;
  } else {
    return f(c) * num + count(c - 1, num);
  }
}
int main() {
  int n;
  cin >> n;
  cout << count(n, n);
  return 0;
}
