/*1213 - �����š�ɾ���������С��
��Ŀ����
��һ�����ظ��������У��뽫����������С��ɾ���������

����
������ ��һ����һ������n ( 5 <= n <= 100 �� �ڶ�����n�����ظ���������

���
ɾ����С��������飡

����
����
5
1 7 6 8 2
���
7 6 8 2
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0, min = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[min] > a[i]) min = i;
  }
  for (int i = min; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  for (int i = 0; i < n - 1; i++) cout << a[i] << " ";

  return 0;
}
