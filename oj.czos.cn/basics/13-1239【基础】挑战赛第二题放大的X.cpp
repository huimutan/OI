/*����������ս���ڶ��⡪���Ŵ��X
��Ŀ����
�����̻�һ���Ŵ��'X'����д��ĸ����
��3*3��'X'Ӧ������ʾ��
 X X
  X
 X X

5*5��'X'������ʾ��
X   X
 X X
  X
 X X
X   X

����
��һ��������n��3 <= n <= 79������ʾ�Ŵ�Ĺ��

���
��ӡһ�����Ϊn * n�Ŵ��'X'

����
����
5
���
X   X
 X X
  X
 X X
X   X
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*1.�ȴ�ӡʵ�ĵ�ɳ©X
  2.�ж�ÿһ�У�ֻ�е�1�������һ���ַ���X,����ո� */
  int n;
  cin >> n;
  n = n / 2;
  for (int i = 0; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (n - i) * 2 + 1; j++) {
      if (j == 1 || j == (n - i) * 2 + 1) {
        cout << "X";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (n - i) * 2 + 1; j++) {
      if (j == 1 || j == (n - i) * 2 + 1) {
        cout << "X";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
