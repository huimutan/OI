#include <bits/stdc++.h>
using namespace std;
int main() {
  //��ʽһ:�����ַ�����δ��ֵ(�������ַ�\0��β)
  char a[10];
  a[0] = 'h';
  a[1] = 'i';
  a[2] = '\0';
  cout << a << " " << sizeof(a) << " " << strlen(a) << endl;

  //��ʽ��:���������ͬʱΪ����Ԫ�ظ�ֵ(ע��:�����ֵԪ�ظ����������鳤��,����ֵĬ����'\0')
  // sizeof():�����������ռ�õ��ֽ�����(һ���ַ�ռ1���ֽ�)
  // strlen():�����ַ���ռ�õ�ʵ���ַ�������(\0֮ǰ�ж����ַ�)
  char b[10] = {'h', 'i', '\0'};
  cout << b << " " << sizeof(b) << " " << strlen(b) << endl;

  //��ʽ��:��������,���������ݾ���
  char c[] = {'h', 'i', '\0'};
  cout << c << " " << sizeof(c) << " " << strlen(c) << endl;

  //��ʽ��:�����ַ�����,ֱ�Ӹ�ֵΪ�ַ���(Ĭ�ϲ���\0)
  char d[] = "hi";
  cout << d << " " << sizeof(d) << " " << strlen(d) << endl;
  
  char e[10] = {'h', 'e', 'l', 'l', 'o', '\0', 'h', 'i'};
  // hello 10 5
  cout << e << " " << sizeof(e) << " " << strlen(e) << endl;
}