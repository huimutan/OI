/*1182 - 【入门】大小写转换
题目描述
把一个字符串里所有的大写字母换成小写字母，小写字母换成大写字母。其他字符保持不变。

输入
输入为一行字符串，其中不含空格。长度不超过80个字符。

输出
输出转换好的字符串。

样例
输入
ABCDefgh123
输出
abcdEFGH123
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char a[1024];
  gets(a);
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] >= 'a' && a[i] <= 'z') {
      a[i] -= 32;
    } else if (a[i] >= 'A' && a[i] <= 'Z') {
      a[i] += 32;
    }
  }
  cout << a;
  return 0;
}
