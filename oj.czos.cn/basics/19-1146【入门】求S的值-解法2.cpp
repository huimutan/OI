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
  long long a[50], s = 1;
  a[1] = 1;
  for (int i = 2; s < 5000; i++) {
    a[i] = a[i - 1] + i - 1;
    s += a[i];
  }
  cout << s;
  return 0;
}
