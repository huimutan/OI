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
  for (char c = 'a'; c <= 'z'; c++) {
    cout << c;
    if (c == 'm' || c == 'z') {
      cout << endl;
    }
  }
  for (char c = 'z'; c >= 'a'; c--) {
    cout << c;
    if (c == 'n' || c == 'a') {
      cout << endl;
    }
  }
}