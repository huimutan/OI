/*1145 - �����š��������
��Ŀ����
��һ�������£� 1 2 4 7 11 16 22���� ���������ǰN��֮�͡�

����
һ������N�� 0 < N < 1000 ����

���
һ��������

����
����
6
���
41
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + n - 1;
  }
  return r;
}
int main() {
  int s = 0;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    s = s + num(i);
  }
  cout << s << endl;
}