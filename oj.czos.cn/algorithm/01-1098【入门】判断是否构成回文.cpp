/*1098 - �����š��ж��Ƿ񹹳ɻ���
��Ŀ����
����һ���ַ����ַ�����������100������"."������ �ж������Ƿ񹹳ɻ��ġ�

����
����ֻ��һ�У�����һ���ַ������������ݲ����ո�

���
���ֻ��һ�У�TRUE ����FALSE ��

����
����
12321.
���
TRUE
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string s1 = s;
  reverse(s.begin(), s.end() - 1);
  if (s1 == s)
    cout << "TRUE";
  else
    cout << "FALSE";
  return 0;
}
