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
  char c;
  for (int i = 97; i <= 122; i++) {
    c = i;  //�õ������Ӧ���ַ�
    cout << c;
    //����ǵ�13���ַ�������26���ַ�Ҫ����
    if (i == 109 || i == 122) {
      cout << endl;
    }
  }
  for (int i = 122; i >= 97; i--) {
    c = i;  //�õ������Ӧ���ַ�
    cout << c;
    //����ǵ�������13���ַ�������26���ַ�Ҫ����
    if (i == 110 || i == 97) {
      cout << endl;
    }
  }
}
