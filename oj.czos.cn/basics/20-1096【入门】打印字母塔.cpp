/*1096 - �����š���ӡ��ĸ��
��Ŀ����
��������N,��ӡͼ��.

����
����ֻ��һ�У�����1��������(N<=15)

���
�����N��.

����
����
3
���
  A
 BAB
CBABC
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    //����ո�
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    //�Ӵ�С����
    for (int j = 1; j <= i; j++) {
      cout << char(i - j + 'A');
    }
    //��С�������
    for (int j = 1; j < i; j++) {
      cout << char(j + 'A');
    }
    cout << endl;
  }
  return 0;
}
