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
int main() {
  int x = 1, s = 0;
  for (int i = 1; s < 5000; i++) {
    s = s + x;
    //���ƣ�A(n)=A(n-1)+(n-1)
    x = x + i;
  }
  cout << s;
  return 0;
}
