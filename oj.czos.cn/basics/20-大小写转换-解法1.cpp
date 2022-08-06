/*
从键盘读入一个英文字母，如果是小写转大写，如果是大写转小写
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;  //存储字符
  int x;   //存储字符的编码
  cin >> c;
  x = c;  //获得字符对应的编码
  //如果是大写字母
  if (x >= 65 && x <= 90) {
    x = x + 32;  //得到对应的小写的编码
    c = x;       //将编码转换为字符
  } else if (x >= 97 && x <= 122) {
    x = x - 32;
    c = x;
  }
  cout << c << endl;
  return 0;
}
