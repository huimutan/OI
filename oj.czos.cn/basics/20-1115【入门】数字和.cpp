/*1115 - 【入门】数字和
题目描述
输入一个很大的数，求各位上的数字和。

输入
一个很大的整数（不超过200位）
输出
一个整数

样例
输入
123
输出
6
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*以字符数组的形式读入整数,循环各个位,求和 */
  char a[210];
  int i, s = 0;  // s:表示总和
  cin >> a;
  //循环每个字符
  for (i = 0; i < strlen(a); i++) {
    //将字符转换为真实的整数
    //'0' (48)转换为数字.
    s = s + (a[i] - 48);
  }
  cout << s << endl;
}
