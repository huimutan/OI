/*
�������Ϊ1,��ֵΪ3�ĵȲ����еĵ�n���ֵ
1 4 7 10 13...
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  //������ʼ��,��ֹ��ѭ��
  //�ݹ�ĳ���
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + 3;
  }
  return r;
}
int main() {
  int i, x;
  //������е�ǰ10���ֵ
  for (i = 1; i <= 10; i++) {
    x = num(i);
    cout << x << " ";
  }
}
