/*1107 - 【基础】求英文句子中的最长单词
题目描述
一个英文句子（长度不超过255），只含有字母和空格，输出最长的一个单词。
如有多个长度相同的单词，则输出最前面的一个。

输入
一个字符串。

输出
一个字符串。

样例
输入
in which four coins
输出
which
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char n[255], x[100] = {'\0'}, y[100] = {'\0'};
  int k = 0;
  gets(n);
  for (int i = 0; i <= strlen(n); i++) {
    if (n[i] != ' ' && n[i] != '\0') {
      x[k] = n[i];
      k++;
    } else {
      x[k] = '\0';
      if (strlen(x) > strlen(y)) {
        strcpy(y, x);
      }
      k = 0;
    }
  }
  cout << y;
  return 0;
}
