/*1190 - �����š��Խ���I
��Ŀ����
��������N�������Ӧ����

����
һ������N���� 0 < n < 10 )

���
һ������ÿ�����ֵĳ���Ϊ3��

����
����
5
���
  1  0  0  0  0
  0  1  0  0  0
  0  0  1  0  0
  0  0  0  1  0
  0  0  0  0  1
��Դ
��ά����

��ǩ
��ά����
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[11][11];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j)
        cout << setw(3) << 1 ;
      else
        cout << setw(3) << 0 ;
    }
    cout << endl;
  }
  return 0;
}
