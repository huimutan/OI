/*1211 - 【入门】数组元素的插入
题目描述
在一个数组的第x个位置插入一个新的数y

输入
有四行 第一行有一个整数n ( 5 <= n <= 10 ） 第二行有n个整数
第三行有一个整数x，为要插入的位置 第四行有一个整数y，为要插入的整数

输出
更新后的数组

样例
输入
5
7 2 3 4 5
2
9
输出
7 9 2 3 4 5
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[11], i, n, x, y;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  //读入要插入的位置
  cin >> x;
  //读入要插入的元素
  cin >> y;
  x--;  //将要插入的位置修改为下标
  //从n-1开始逆序循环到x下标结束
  for (i = n - 1; i >= x; i--) {
    //将每个元素移动(复制)到后面的元素位置上
    a[i + 1] = a[i];
  }
  //在x下标的位置插入元素y
  a[x] = y;
  //数组元素个数多了一个
  n++;
  //输出插入的结果
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
