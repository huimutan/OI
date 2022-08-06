/*G. 【入门】求一个5位数的各个位之和
题目描述
从键盘读入一个5位的正整数，请求出这个5位数的各个位之和；

输入
一个5位的正整数n

输出
这个5位数的各个位之和

样例
输入
12345
输出
15
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,sum=0;
  cin >> x;
  while (x> 0)
  {
   
    sum+=x % 10;
    x/= 10;
  }
  cout << sum;
  return 0;
}
