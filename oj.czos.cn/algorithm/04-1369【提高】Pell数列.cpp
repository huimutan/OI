/*1369 - ����ߡ�Pell����
��Ŀ����
��һ�����У�����ǰ10���ֵ�ֱ�Ϊ��1 2 5 12 29 70 169 408 985
2378��������б���ΪPell���У����ʸ����еĵ�n���ֵ�Ƕ��٣���n<=1000��

����
һ������n��
���
��n���ֵ��

����
����
10
���
2378
��Դ
����

��ǩ
����
*/

#include <bits/stdc++.h>
using namespace std;
/*
An = A(n-1)*2 + A(n-2)
*/
//�������߾��ȵ������ĺ�
string he(string s1, string s2) {
  string r;  //����ܺ�
  int a[1000] = {0};
  int b[1000] = {0};
  int c[1000] = {0};
  //���������������
  int i;
  for (i = 0; i < s1.size(); i++) {
    a[i] = s1[s1.size() - i - 1] - '0';
  }
  for (i = 0; i < s2.size(); i++) {
    b[i] = s2[s2.size() - i - 1] - '0';
  }
  //��λ���,��λ��λ
  int len = s1.size();
  if (s2.size() > s1.size()) len = s2.size();

  for (i = 0; i < len; i++) {
    c[i] = c[i] + a[i] + b[i];
    if (c[i] >= 10) {
      c[i + 1] = c[i + 1] + c[i] / 10;
      c[i] = c[i] % 10;
    }
  }
  //�ж��Ƿ���1λ
  if (c[len] != 0) len++;
  //����c����ƴ�ӳ��ַ���
  for (i = len - 1; i >= 0; i--) {
    //�� c[i]+'0'��� ascii ��ǿ��ת��Ϊ char ����
    r = r + (char)(c[i] + '0');
  }
  return r;
}
//��һ���߾��ȵ����� * 2 �Ļ�
string cheng(string s) {
  string r;
  int a[1000] = {0};
  int i;
  //�������a ����
  for (i = 0; i < s.size(); i++) {
    a[i] = s[s.size() - i - 1] - '0';
  }
  //��λ*2
  for (i = 0; i < s.size(); i++) {
    a[i] = a[i] * 2;
  }

  //��λ��λ
  for (i = 0; i < s.size(); i++) {
    if (a[i] >= 10) {
      a[i + 1] = a[i + 1] + a[i] / 10;
      a[i] = a[i] % 10;
    }
  }
  //�ж��Ƿ��һλ
  int len = s.size();
  if (a[len] != 0) len++;
  //����ƴ�ӵ��ַ���r��
  for (i = len - 1; i >= 0; i--) {
    r = r + to_string(a[i]);
  }
  return r;
}
int main() {
  // z:���������,xy ���� z ��ǰ����
  string x, y, z;
  int i, n;
  cin >> n;
  // A(n)=A(n-1)*2+A(n-2)
  x = "1";
  y = "2";
  if (n == 1) {
    cout << x;
  } else if (n == 2) {
    cout << y;
  } else {
    //�ӵ� 3 �ʼ����
    for (i = 3; i <= n; i++) {
      z = he(cheng(y), x);
      //�޸� xy ��ֵ��������Ƶ�
      x = y;
      y = z;
    }
    cout << z;
  }
}