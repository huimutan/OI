/*1194 - �����š�б��III
��Ŀ����
��������N�������Ӧ����

����
һ������N���� 0 < n < 10 )

���
һ������ÿ����ĸ�ĳ���Ϊ3��

����
����
5
���
  A  B  C  D  E
  B  C  D  E  A
  C  D  E  A  B
  D  E  A  B  C
  E  A  B  C  D
��Դ
��ά����

��ǩ
��ά����
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
   0  1  2  3  4
0  A  B  C  D  E
1  B  C  D  E  A
2  C  D  E  A  B
3  D  E  A  B  C
4  E  A  B  C  D

    j0 j1 j2 j3 j4
i0  00
i1  10 01
i2  20 11 02
i3  30 21 12 03
i4  40 31 22 13 04

i0  44
i1  43 34
i2  42 33 24
i3  41 32 23 14
i4  40 31 22 13 04--����
*/

  int i, j, n, a[10][10] = {0};
  cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      a[i - j][j] = i;
    }
  }
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j <= i; j++) {
      a[n - j - 1][j + (n - 1 - i)] = n - i - 2;
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      char c = a[i][j] + 'A';
      cout << setw(3) << c;
    }
    cout << endl;
  }
  return 0;
}
