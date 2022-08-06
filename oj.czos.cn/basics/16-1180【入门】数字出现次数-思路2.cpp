/*1180 - 【入门】数字出现次数
题目描述
有50个数（0-19），求这50个数中相同数字出现的最多次数为几次？

输入
50个数字

输出
1个数字（即相同数字出现的最多次数）

样例
输入
1 10 2 0 15 8 12 7 0 3 15 0 15 18 16 7 17 16 9 1 19 16 12 17 12 4 3 11 1 14 2 11
14 6 11 4 6 4 11 13 18 7 0 3 2 3 18 19 2 16
输出
4
来源
数组问题

标签
数组问题
*/
#include <iostream>
using namespace std;
int main() {
  //存放每个元素
  int x;
  //用来存放每个数出现的次数
  int c[20] = {0};
  int i, m;  // m用来求最多的次数(c数组的最大值)
  //读入50个数
  for (i = 0; i < 50; i++) {
    cin >> x;
    //下标为x的c数组的元素要自增
    c[x]++;
  }
  //求最多出现的次数(c数组的最大数)
  m = c[0];
  for (i = 1; i < 20; i++) {
    if (c[i] > m) m = c[i];
  }
  cout << m << endl;
  return 0;
}