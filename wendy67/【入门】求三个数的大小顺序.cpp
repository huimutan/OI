/*D. �����š����������Ĵ�С˳��
��Ŀ����
���������������ɴ�С˳���ӡ������
����
����ֻ��һ�У�����3��������֮����һ���ո�ֿ���
���
���ֻ��һ�У�����3��������֮����һ���ո�ֿ���
����
����
3 8 2
���
8 3 2
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c && b > c) {
    cout << a << " " << b << " " << c;
  } else if (a > b && a > c && b < c) {
    cout << a << " " << c << " " << b;
  } else if (b > a && b > c && a > c) {
    cout << b << " " << a << " " << c;
  } else if (b > a && b > c && a < c) {
    cout << b << " " << c << " " << a;
  } else if (c > a && c > b && a > b) {
    cout << c << " " << a << " " << b;
  } else {
    cout << c << " " << b << " " << a;
  }

  return 0;
}
