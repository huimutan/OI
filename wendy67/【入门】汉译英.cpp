/*E. 【入门】汉译英
题目描述
输入某个整数，如果输入的整数在1-9范围内，则输出相对应的单词，
否则输出'out'
输入
一行，一个整数n。
输出
整数n相对应的小写英文单词或'out'。
样例
输入
1
输出
one
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "one";
  } else if (n == 2) {
    cout << "two";
  } else if (n == 3) {
    cout << "three";
  } else if (n == 4) {
    cout << "four";
  } else if (n == 5) {
    cout << "five";
  } else if (n == 6) {
    cout << "six";
  } else if (n == 7) {
    cout << "seven";
  } else if (n == 8) {
    cout << "eight";
  } else if (n == 9) {
    cout << "nine";
  } else {
    cout << "out";
  }

  return 0;
}
