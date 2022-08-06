#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  定义字符存储大写字母，得到编码，并得到对应的小写字母
  */
  char c;  //存储大写字母
  cin >> c;
  //获取字符对应的编码
  int x = c;
  cout << x << endl;
  //每个小写字母的编码,比对应的大写字母的编码大32
  //获取大写字母对应的小写字母的编码
  x = x + 32;
  //将编码赋值给字符,得到编码对应的字符
  c = x;
  cout << c << endl;
}