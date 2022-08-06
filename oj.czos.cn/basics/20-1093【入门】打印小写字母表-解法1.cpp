/*1093 - 【入门】打印小写字母表
题目描述
把英文字母表的小写字母按顺序和倒序打印出来。(每行13个)

输入
无

输出
输出四行

样例
输入
输出
abcdefghijklm
nopqrstuvwxyz
zyxwvutsrqpon
mlkjihgfedcba
来源
字符型

标签
字符型
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;
  for (int i = 97; i <= 122; i++) {
    c = i;  //得到编码对应的字符
    cout << c;
    //如果是第13个字符或者是26个字符要换行
    if (i == 109 || i == 122) {
      cout << endl;
    }
  }
  for (int i = 122; i >= 97; i--) {
    c = i;  //得到编码对应的字符
    cout << c;
    //如果是倒过来第13个字符或者是26个字符要换行
    if (i == 110 || i == 97) {
      cout << endl;
    }
  }
}
