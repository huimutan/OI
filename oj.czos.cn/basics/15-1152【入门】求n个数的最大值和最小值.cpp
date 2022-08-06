/*1152 - 【入门】求n个数的最大值和最小值
题目描述
任意输入n个整数，把它们的最大值，最小值求出来.

输入
输入只有一行，包括一个整数n(1<=n<=20),后面跟着n个数.
每个数的范围在0到32767之间。

输出
输出只有一行,包括2个整数。

样例
输入
5 1 99 3 6 0
输出
99 0
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*   int a[20], n, max, min;
    cin >> n;
    for (int i = 0; i < n; i++) {//读入数组元素
      cin >> a[i];
    }
    max = a[0];  //假设最大数是第一个数
    min = a[0];  //假设最小数是第一个数
    //循环数组其余的元素,如果有比max还大的数,替换max
    // i不需要从.开始循环,因为a[0]已经是假设的最大值了
    for (int i = 1; i < n;i++) {  
      if (a[i] > max) {
        max = a[i];
      }
      if (a[i] < min) {
        min = a[i];
      }
    }
    cout << max << " " << min << endl;
     */
  int a[20], n, max, min;
  cin >> n;
  for (int i = 0; i < n; i++) {//读入数组元素
    cin >> a[i];
  }
  max = 0;  //假设最大数是第一个数
  min = 0;  //假设最小数是第一个数
  //循环数组其余的元素,如果有比a[max]还大的数,替换max
  // i不需要从0开始循环,因为a[0]已经是假设的最大值了
  for (int i = 1; i < n; i++) {
    if (a[i] > a[max]) {
      max = i;
    }
    if (a[i] < a[min]) {
      min = i;
    }
  }
  cout << a[max] << " " << a[min] << endl;
  return 0;
}