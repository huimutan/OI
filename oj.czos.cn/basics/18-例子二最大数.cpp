#include <bits/stdc++.h>
using namespace std;
//��2�������Ľϴ���
int max(int a, int b) {
  //���ں����з���ֵ,�ȶ������,�����洢����ֵ
  int r;
  if (a > b) {
    r = a;
  } else {
    r = b;
  }
  //������ֵ�ȶ��岢return��,��ֹ����
  return r;
}
//��3�������������
int three(int a, int b, int c) {
  int r;
  r = max(a, b);
  r = max(r, c);
  return r;
}
int main() {
  //������2�������ϴ����ĺ���
  //���ú���:��Ҫʲô��ʲô(���ͺ͸���Ҫƥ��),����ʲô��ʲô
  ////����max������Ҫ2����������,���,���Ǹ�����������Ϊ����
  ////����max������������,������Ƕ����������͵ı��������� 
  int x = max(2,8);
  cout << x << endl;
  int m = 100;
  int n = 200;
  //���ú���
  int y = max(m, n);
  cout << y << endl;
  //���ú���,��3�����������
  int z = three(2, 9, 3);
  cout << z << endl;
}