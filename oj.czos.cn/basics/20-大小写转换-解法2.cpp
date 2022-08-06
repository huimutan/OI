/*
从键盘读入一个英文字母，如果是小写转大写，如果是大写转小写
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;  //存储字符
  cin >> c;
  //由于字符的本质是编码(整数),因此字符可以直接比较大小和运算
  if (c >= 'A' && c <= 'Z') {
    c = c + 32;
  } else if (c >= 'a' && c <= 'z') {
    c = c - 32;
  }
  cout << c << endl;
}
