/*1093 - �����š���ӡСд��ĸ��
��Ŀ����
��Ӣ����ĸ���Сд��ĸ��˳��͵����ӡ������(ÿ��13��)

����
��

���
�������

����
����
���
abcdefghijklm
nopqrstuvwxyz
zyxwvutsrqpon
mlkjihgfedcba
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;  // �ַ���
  char c;
  for (c = 'a'; c <= 'z'; c++) {
    s = s + c;
    if (c == 'm' || c == 'z') {
      s = s + '\n';  //˼����������endl������
    }
  }
  for (c = 'z'; c >= 'a'; c--) {
    s = s + c;
    if (c == 'n') {
      s = s + '\n';
    }
  }
  cout << s;
  return 0;
}