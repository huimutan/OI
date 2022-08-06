/*
1244: 【入门】请问一个正整数能够整除几次2？

题目描述
请问一个正整数n能够整除几次2？

比如：4可以整除2次2，100可以整除2次2，9可以整除0次2。

输入
从键盘读入一个正整数n
输出
输出一个整数，代表n能够整除2的次数
样例输入
8
样例输出
3
*/

#include <iostream>
using namespace std;
int main()
{
  int n, c = 0; // n代表整数，c计数器
  cin >> n;
  //当n能够整除2 (偶数）
  while (n % 2 == 0)
  {
    n = n / 2;
    c++;
  }
  cout << c << endl;
  return 0;
}
