#include <bits/stdc++.h>
using namespace std;
//��������������
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
  sort(a, a + n);  //����������Ԫ����������
  //�������2����~������2������������sort(a+1,a+n-1);
  sort(a, a + n, cmp);
  //����������
  reverse(a, a + n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << "";
  }
}
