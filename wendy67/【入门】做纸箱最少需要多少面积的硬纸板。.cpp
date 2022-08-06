/*J. 【入门】做纸箱最少需要多少面积的硬纸板。
题目描述
请问做一个尺寸为a * b * c（单位：厘米）
的开口的立方体纸箱（只有一个面是不需要封的，
其余5个面都需要封起来，这样算开口的），最少需要多少平方厘米的纸。
（6.1.6）
输入
三个整数：a b c
输出
制作该纸箱需要的最少硬纸板的面积，一个整数
样例
输入
5 3 4
输出
74
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a * b > a * c && a * b > b * c) {
    cout << (a * b + a * c + b * c) * 2 - a * b;
  }
  if (a * c > a * b && a * c > b * c) {
    cout << (a * b + a * c + b * c) * 2 - a * c;
  }
  if (b * c > a * b && b * c > a * c) {
    cout << (a * b + a * c + b * c) * 2 - b * c;
  }
  return 0;
}
