/*1146 - �����š���S��ֵ
��Ŀ����
��S=1+2+4+7+11+16������ֵ�պô��ڵ���5000ʱS��ֵ��

����
��

���
һ�У�һ��������

��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;

/*
���У�1 2 4 7 11 16
A(2)=A(1)+1 A(3)=A(2)+2 A(4)=A(3)+3
A(n)=A(n-1)+n-1
�����еĵ�n���ֵ
*/
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + n - 1;
  }
  return r;
}
int main() {
  int s = 0, i = 1;
  while (s < 5000) {
    s = s + num(i);
    i++;
  }
  cout << s << endl;
}
