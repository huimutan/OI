/*1107 - ����������Ӣ�ľ����е������
��Ŀ����
һ��Ӣ�ľ��ӣ����Ȳ�����255����ֻ������ĸ�Ϳո�������һ�����ʡ�
���ж��������ͬ�ĵ��ʣ��������ǰ���һ����

����
һ���ַ�����

���
һ���ַ�����

����
����
in which four coins
���
which
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char n[255], x[100] = {'\0'}, y[100] = {'\0'};
  int k = 0;
  gets(n);
  for (int i = 0; i <= strlen(n); i++) {
    if (n[i] != ' ' && n[i] != '\0') {
      x[k] = n[i];
      k++;
    } else {
      x[k] = '\0';
      if (strlen(x) > strlen(y)) {
        strcpy(y, x);
      }
      k = 0;
    }
  }
  cout << y;
  return 0;
}
