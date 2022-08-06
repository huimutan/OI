/*1098 - 【入门】判断是否构成回文
题目描述
输入一串字符，字符个数不超过100，且以"."结束。 判断它们是否构成回文。

输入
输入只有一行，包括一串字符。（测试数据不含空格）

输出
输出只有一行，TRUE 或者FALSE 。

样例
输入
12321.
输出
TRUE
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char s[110];
  int i;
  bool r = true;  //假设是回文
  // gets(s);
  cin >> s;
  //循环字符串实际长度的一半
  for (i = 0; i < (strlen(s) - 1) / 2; i++) {
    //如果对称位置有一个元素不等,就不是回文
    if (s[i] != s[strlen(s) - i - 2]) {
      r = false;
      break;  //停止循环
    }
  }
  //判断是否是回文
  if (r == true) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;
  }
  return 0;
}
