/*1131 - �����š�ɾ��ָ���ַ�
��Ŀ����
�Ӽ�������һ���ַ���str��һ���ַ�c��ɾ��str�е������ַ�c�����ɾ������ַ���str��

����
��һ����һ���ַ������ַ��������ո񣬳��ȡ�100��
�ڶ�����һ���ַ���


���
ɾ��ָ���ַ�����ַ�����

����
����
sdf$$$sdf$$
$
���
sdfsdf
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str, str2 = "";
  char c;
  cin >> str >> c;
  for (int i = 0; str[i]; i++) {
    if (c != str[i]) str2 += str[i];
  }
  cout << str2;
  return 0;
}
