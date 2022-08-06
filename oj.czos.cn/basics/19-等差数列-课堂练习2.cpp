/*
定义函数，递归求解等比数列：1 2 4 8 16…第n项的值
递归规律：A(n)=A(n-1)*2
*/
#include <bits/stdc++.h>
using namespace std;
/*求1 2 4 8 16 32...等比数列的第n项的值
A(n)=A(n-1)*2
*/
int num(int n) {
  int r;
  //交代起始项
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) * 2;
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
