/*
�Ӽ��̶���һ��Ӣ����ĸ�������Сдת��д������Ǵ�дתСд
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;  //�洢�ַ�
  int x;   //�洢�ַ��ı���
  cin >> c;
  x = c;  //����ַ���Ӧ�ı���
  //����Ǵ�д��ĸ
  if (x >= 65 && x <= 90) {
    x = x + 32;  //�õ���Ӧ��Сд�ı���
    c = x;       //������ת��Ϊ�ַ�
  } else if (x >= 97 && x <= 122) {
    x = x - 32;
    c = x;
  }
  cout << c << endl;
  return 0;
}
