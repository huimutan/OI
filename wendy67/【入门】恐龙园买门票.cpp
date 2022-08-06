/*F. 【入门】恐龙园买门票
题目描述
恐龙园买门票，身高低于1.3米购儿童票(60元)，否则成人票120元。
 试编写一个程序，输入身高，输出相应的门票价格。

输入
一行，一个人的身高。

输出
一行，一个整数

样例
输入
1.1
输出
60
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  float a;
  cin >> a;
  if (a < 1.3) {
    cout << 60;
  } else {
    cout << 120;
  }
  return 0;
}
