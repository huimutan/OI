/*【入门】温度转换
题目描述
编一程序，将摄氏温度换为华氏温度。公式为：f=9/5*c+32。
其中f为华氏温度,c是摄氏温度。（5.2.12）

输入
输入一行，只有一个整数c

输出
输出只有一行，包括1个实数。（保留两位小数）

样例
输入
50
输出
122.00
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int c,f;
  cin >> c;
  
  cout<<fixed<<setprecision(2)<< 9.0 / 5 * c + 32;
  return 0;
}
