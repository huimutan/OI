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
  char s[110];
  int i;
  bool r = true;  //�����ǻ���
  // gets(s);
  cin >> s;
  //ѭ���ַ���ʵ�ʳ��ȵ�һ��
  for (i = 0; i < (strlen(s) - 1) / 2; i++) {
    //����Գ�λ����һ��Ԫ�ز���,�Ͳ��ǻ���
    if (s[i] != s[strlen(s) - i - 2]) {
      r = false;
      break;  //ֹͣѭ��
    }
  }
  //�ж��Ƿ��ǻ���
  if (r == true) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;
  }
  return 0;
}
