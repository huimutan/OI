/*
求解首项为1,差值为3的等差数列的第n项的值
1 4 7 10 13...
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  //交代起始项,防止死循环
  //递归的出口
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + 3;
  }
  return r;
}
int main() {
  int i, x;
  //输出数列的前10项的值
  for (i = 1; i <= 10; i++) {
    x = num(i);
    cout << x << " ";
  }
}
