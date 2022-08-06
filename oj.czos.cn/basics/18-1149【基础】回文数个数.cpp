/*1149 - 【基础】回文数个数
题目描述
一个正整数，正读和反读都相同的数为回文数。
例如22，131，2442，37073，6，…所有1位数都是回文数。
给出一个正整数n（1≤n≤10000），求出1,2,…,n之中（包括1和n）的回文数的个数。

输入
任意给定一个正整数n（0 < n <= 10000 ）
输出
一个正整数，表示[1,n]之间的回文数的个数。

样例
输入
325
输出
41
说明
来源
2015江苏省青少年信息学奥林匹克竞赛复赛

来源
省赛 函数问题 简单循环

标签
省赛函数问题简单循环
*/
#include <bits/stdc++.h>
using namespace std;
bool ishuiwen(int n) {
  bool r;
  int fan = 0;  //存储相反数
  int x = n;    //处理n，保留原数
  //思路：i =循环的每个数，判断每个数i是否是回文 使用短除法，求出i倒过来的数
  while (x > 0) {
    fan = fan * 10 + x % 10;
    x /= 10;
  }
  // cout << fan << endl;
  if (fan == n) {
    r = true;
  } else {
    r = false;
  }
  return r;
}
int main() {
  int n, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (ishuiwen(i)) c++;
  }
  cout << c;
  return 0;
}
