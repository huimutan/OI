/*A. �����š������ļ۸�2��
��Ŀ����
С������ȥ��������ϰ�˵��30��������1Ԫ/����
20~29��1.2Ԫ/����10~19��1.5Ԫ/����10������1.8Ԫ/����
��Ӽ��̶���С�������������������С��Ӧ�ø��ļ۸񣨼۸���1λС������
����
һ������n����С������ı���������
���
С��Ӧ���Ľ��
����
����
30
���
30.0
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  double n;
  cin >> n;
  if (n >= 30) {
    cout << fixed << setprecision(1) << n * 1.0;
  } else if (20 <= n && n <= 29) {
    cout << fixed << setprecision(1) << n * 1.2;
  } else if (10 <= n && n <= 19) {
    cout << fixed << setprecision(1) << n * 1.5;
  } else {
    cout << fixed << setprecision(1) << n * 1.8;
  }

  return 0;
}

