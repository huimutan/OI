/*1397 - 【入门】完美的偶数？
题目描述
完美偶数指的是，如果一个数本身是偶数，且这个数是偶数位的数，且这个数的各个位也是偶数，那么这个数就可以称为完美偶数；比如：28就是完美偶数，而246就不是，因为246是一个3位数。
请你编程求出，从键盘读入的n个数中，哪些数是完美的偶数，输出他们。

输入
第一行是一个整数n（n<=100）
第二行是n个整数（这些整数都是1~9999范围内的整数）

输出
按顺序输出这n个数中的完美偶数，每个数一行

样例
输入
5
26 4286 228 32 1280
输出
26
4286
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    int num = a[i];
    int c = 0, mark = 1;
    if (num % 2 != 0) mark = 0;
    //cout << num % 2 << " " << mark << endl;
    while (num != 0) {
      if (num % 10 % 2 != 0) {
        mark = 0;
        break;
      }
      num /= 10;
      c++;
    }
    if (c % 2 != 0) mark = 0;
    //cout << c % 2 << " " << mark << endl;
    if (mark == 1) cout << a[i] << endl;
  }

  return 0;
}
