/*【入门】移动数组元素
题目描述
在一个不重复的数组中，请将这个数组的最小数和数组第一个数交换，最大数和数组最后一个数交换！

输入
有两行 第一行有一个整数n ( 5 <= n <= 100 ） 第二行有n个不重复的整数！

输出
移动位置后的数组！

样例
输入
5
6 7 1 10 4
输出
1 7 6 4 10
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n], min = 0, max = 0;  //最大最小值默认为第一个数和最后一个数的索引
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[min] > a[i]) min = i;
    if (a[max] < a[i]) max = i;
  }
  //对调
  int t = a[0];
  a[0] = a[min];
  a[min] = t;
  t = a[n - 1];
  a[n - 1] = a[max];
  a[max] = t;
  for (int i = 0; i < n; i++) cout << a[i] << " ";
  return 0;
}
