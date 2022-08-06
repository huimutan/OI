/*B. 【入门】判断奇偶数
题目描述
输入一个整数，判断是否为偶数。是输出"y e s"，否则输出"n o"。

输入
输入只有一行，包括1个整数。

输出
输出只有一行。（注意输出格式，具体请看下方提示）

样例
输入
2
输出
y e s
说明
要注意空格！！！！！！！！
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int i;
  cin >> i;
  if (i % 2 == 0) {
    cout << "y e s";
  } else {
    cout << "n o";
  }

  return 0;
}
