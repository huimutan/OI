/*1120 - �����š���������ַ���
��Ŀ����
�������һ�����Ȳ�����255���ַ��������䵹�ú������

����
ֻ��һ�С����������ݲ����ո�

���
ֻ��һ�У�������ú���ַ�����

����
����
asdfghjkl123456
���
654321lkjhgfdsa
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // string s;
  // cin >> s;
  // reverse(s.begin(), s.end());
  // cout << s;

  char c[255];
  cin >> c;
  for (int i = strlen(c) - 1; i >= 0; i--) {
    cout << c[i];
  }

  return 0;
}
