/*【入门】总分和平均分
题目描述
期末考试成绩出来了，小明同学语文、数学、英语分别考了x、y、z分，请编程帮助小明计算一下，他的总分和平均分分别考了多少分？

输入
三个整数x、y、z分别代表小明三科考试的成绩。

输出
第1行有一个整数，代表总分，第2行有一个小数（保留1位小数）代表平均分。

样例
输入
100 95 91
输出
286
95.3
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, y, z;
  cin >> x >> y >> z;
  cout<<x+y+z<<endl;
  cout<< fixed << setprecision(1)<<(x+y+z)/3.0;
  return 0;
}
