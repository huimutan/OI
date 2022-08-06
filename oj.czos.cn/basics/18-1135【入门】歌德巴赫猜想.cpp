/*1135 - 【入门】歌德巴赫猜想
题目描述
任一个大于等于4的偶数都可以拆分为两个素数之和。
（5.1.40）

输入
一个整数n( 4 <= n <= 200 ）

输出
将小于等于n的偶数拆分为2个质数之和，列出所有方案！

样例
输入
10
输出
4=2+2
6=3+3
8=3+5
10=3+7
10=5+5
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
//判断素数
bool sushu(int n) {
  bool r = true;                        //假设是素数
  for (int i = 2; i <= sqrt(n); i++) {  //循环因子范围,找到因子就不是素数
    if (n <= 1 || n % i == 0) {  //注意判断特殊情况
      r = false;
      break;
    }
  }
  return r;
}
//将一个偶数能够拆分素数和的方案罗列
void caixiang(int n) {
  for (int j = 2; j <= n / 2; j++) {
    if (sushu(j) == true && sushu(n - j) == true) {
      cout << n << "=" << j << "+" << n - j << endl;
    }
  }
}
int main() {
  /*将4~n之间的每个偶数,能够拆分素数和的方案罗列
  第1步:先实现将-个偶数能够拆分素数和的方案罗列
  n = 10
  2+8 3+7 4+6 5+5
  判断思路:循环i = 2 ~ n/2,如果i是素数,且n - i是素数 */
  // caixiang(10);
  int n;
  cin >> n;
  for (int k = 4; k <= n; k += 2) {
    caixiang(k);
  }
  return 0;
}