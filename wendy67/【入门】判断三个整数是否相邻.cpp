/*F. �����š��ж����������Ƿ�����
��Ŀ����
�ж����������Ƿ����ڣ������"TRUE"���������"FALSE"��
����
����ֻ��һ�У�����3��������
���
���ֻ��һ�С�
����
����
1 3 2
���
TRUE
˵��
����������һ��������ģ����磺1 3 2�������ڵ�����
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d=0;
  cin >> a >> b >> c ;
  if (a < b) {
    d = a;
    a = b;
    b = d;
  }
  if (b < c) {
    d = b;
    b = c;
    c = d;
  }
  if (a < b) {
    d = a;
    a = b;
    b = d;
  }
  if (a - b == 1 && b - c == 1) {
    cout << "TRUE";
  } else {
    cout << "FALSE";
  }

  return 0;
}
