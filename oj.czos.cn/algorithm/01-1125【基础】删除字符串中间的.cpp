/*1125 - ��������ɾ���ַ����м��*
��Ŀ����
����һ���ַ���������ǰ�ʹ����*�����������м��*ɾ����

����
һ����*���ַ�����

���
ɾ���˴��е�*���ַ�����

����
����
***ABC123**123*abc***********
���
***ABC123123abc***********
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, s3;
  cin >> s;
  int i = 0, j = s.size() - 1;
  while (s[i] == '*') {
    cout << '*';
    i++;
  }
  while (s[j] == '*') {
    s3 += '*';
    j--;
  }
  for (int k = i; k <= j; k++) {
    if (s[k] != '*') cout << s[k];
  }
  cout << s3;
  return 0;
}
