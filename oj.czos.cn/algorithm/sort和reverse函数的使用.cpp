#include <bits/stdc++.h>
using namespace std;
//辅助降序排序函数
bool cmp(int a, int b) {
  /*   if (a > b) {
      return true;
    } else {
      return false;
    } */
  return a > b;
}
int main() {
  int a[5] = {3, 2, 1, 5, 4};
  int n = 5;
  sort(a, a + n);  //对数组所有元素升序排序
  //对数组第2个数~倒数第2个数升序排序sort(a+1,a+n-1);
  sort(a, a + n, cmp);
  //数组逆序函数
  reverse(a, a + n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << "";
  }
}
