/*
���庯�����ݹ����ȱ����У�1 2 4 8 16����n���ֵ
�ݹ���ɣ�A(n)=A(n-1)*2
*/
#include <bits/stdc++.h>
using namespace std;
/*��1 2 4 8 16 32...�ȱ����еĵ�n���ֵ
A(n)=A(n-1)*2
*/
int num(int n) {
  int r;
  //������ʼ��
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
