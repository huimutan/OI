/*1214 - �����š���������������һ����
��Ŀ����
��һ�����ظ������������ĺ������һ���µ���y

����
������ ��һ����һ������n ( 5 <= n <= 100 �� �ڶ�����n������
��������һ������y��ΪҪ������� ��� ���º������

����
����
5
7 2 3 4 5
9
���
7 9 2 3 4 5
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n + 1], max = 0;
  for (int i = 0; i < n; i++) {  //���벢��������
    cin >> a[i];
    if (a[i] > a[max]) max = i;
  }
  int insert;
  cin >> insert;
  for (int i = n + 1; i > max + 1; i--) {  //���������������Ų
    a[i] = a[i - 1];
  }
  a[max + 1] = insert;
  for (int i = 0; i < n + 1; i++) cout << a[i] << " ";  //����������
  return 0;
}
