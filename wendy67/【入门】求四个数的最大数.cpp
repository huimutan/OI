/*H. �����š����ĸ����������
��Ŀ����
��֪���ĸ����ȵ����������е�������ҳ�����
����
����ֻ��һ�У�����4��������֮����һ���ո�ֿ���
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��������
����
����
1 9 8 6
���
9
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > b && a > c && a > d) {
    cout << a;
  } else if (b > a && b > a && b > d) {
    cout << b;
  } else if (c > a && c > b && c > d) {
    cout << c;
  } else {
    cout << d;
  }

  return 0;
}
