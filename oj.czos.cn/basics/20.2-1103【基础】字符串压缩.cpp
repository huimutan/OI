/*1103 - 【基础】字符串压缩
题目描述
输入字符串，输出压缩后的字符串。
压缩的方法是把连续的相同字母压缩为"长度+字母"的形式，
在本题中，单个的字母不需要压缩。

输入
一行，一个字符串,只包含小写英文字母,长度不超过255。

输出
样例
输入
aaabbbbbx
输出
3a5bx
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char s[300];
  int i, c = 0;  // c:用来统计连续相同字符出现的次数
  gets(s);
  //循环每个字符
  for (i = 0; i < strlen(s); i++) {
    c++;  //计数器自增
    //判断连续相同的字符是否结束
    // i == strlen(s)-1 || s[i] != s[i+l]
    if (s[i] != s[i + 1]) {
      //如果字符出现1次,不压缩
      if (c == 1) {
        cout << s[i];
      } else {
        cout << c << s[i];
      }
      c = 0;  //计数器清零
    }
  }
  return 0;
}
