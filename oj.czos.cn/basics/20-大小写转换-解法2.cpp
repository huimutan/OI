/*
�Ӽ��̶���һ��Ӣ����ĸ�������Сдת��д������Ǵ�дתСд
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char c;  //�洢�ַ�
  cin >> c;
  //�����ַ��ı����Ǳ���(����),����ַ�����ֱ�ӱȽϴ�С������
  if (c >= 'A' && c <= 'Z') {
    c = c + 32;
  } else if (c >= 'a' && c <= 'z') {
    c = c - 32;
  }
  cout << c << endl;
}
