/*B. �����š��жϳɼ��ȼ�
��Ŀ����
����ĳѧ���ɼ������86������(����86�֣��������VERY GOOD�� ��
�����60��85֮����������GOOD��(����60��85)��С��60���������BAD����
����
����ֻ��һ�У�����1��������
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ���
����
����
80
���
GOOD
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  if (a >= 86) {
    cout << "VERY GOOD" << endl;
  } else if (a >= 60 && a <= 85) {
    cout << "GOOD" << endl;
  } else {
    cout << "BAD" << endl;
  }

  return 0;
}
