/*1127 - 【基础】整数的拼接
题目描述
设有n个整数(3≤n≤100)，将这些整数拼接起来，可以形成一个最大的整数。
例如：n=3，三个整数分别为21 7 34， 拼接后最大的整数为： 73421
再比如：n=3，三个整数分别是1 10 110，拼接后最大的整数是：111010

输入
第一行一个整数n ，表示有n 个整数。
第二行n个整数，数与数之间用一个空格分隔。

输出
输出到屏幕 。一个拼接后的最大的整数。

样例
输入
3
21 7 34
输出
73421
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
// s1="10"s2="1"
// s1+s2>s2+s1
// 110>181
// 1 110 10
bool cmp(string s1, string s2) {
  if (s1 + s2 > s2 + s1) {
    return true;
  } else {
    return false;
  }
}
string s[110];
int i, n;
int main() {
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> s[i];
  }
  sort(s, s + n, cmp);
  //输出排序的结果
  for (i = 0; i < n; i++) {
    cout << s[i];
  }
}