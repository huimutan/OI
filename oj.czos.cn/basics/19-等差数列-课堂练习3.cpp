/*
定义函数,递归求解的阶乘的值
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = n * num(n - 1);
  }
  return r;
}
int main() {
  int i, x;
  for (i = 1; i <= 10; i++) {
    x = num(i);
    cout << x << " ";
  }
}