/*�����š���ӡn�е������ĺ�����
��Ŀ����
��Ӽ��̶���һ������n��n��1~10�ķ�Χ�ڵ�����������ӡ������ͼ��ʾ��n�е������ĺ����ᣡ

���磬n=5�����ӡͼ�����£�
*    *
**  **
******
**  **
*    *

����
һ������n������ͼ�ε�������

���
n�е�ͼ�Σ�

����
����
5
���
*    *
**  **
******
**  **
*    *
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  n /= 2;
  for (int i = 1; i <= n + 1; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (n - i) + 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (n - i) + 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
