/*1273 - ����������°ͺղ�������н�
��Ŀ����
�����°ͺղ�������н⣨��һ������9��������ֳ���������֮�ͣ���������С�����˳��д����

����
һ�У�һ������9��������

���
��һ�У�һ������N����ʾ��������� ��2-N+1�У�ÿ��һ���⡣

����
����
15
���
3
15=2+2+11
15=3+5+7
15=5+5+5
��Դ
��ά����

��ǩ
��ά����
*/
#include <bits/stdc++.h>
using namespace std;
bool sushu(int n) {
  bool r = true;  //����n������
  //ѭ��2 ~sqrt(n), �����ӾͲ�������(ע�����n<=1Ҳ����)
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0 || n <= 1) {
      r = false;
      return r;  //ֹͣѭ��
    }
  }
  return r;
}
int main() {
  int n;
  cin >> n;
  int a[10000][3], m = 0;
  for (int i = 2; i <= n / 3; i++) {
    for (int j = i; j <= (n - i) / 2; j++) {
      for (int k = j; k <= n - i - j; k++) {
        if (sushu(i) && sushu(j) && sushu(k) && n == i + j + k) {
          a[m][0] = i;
          a[m][1] = j;
          a[m][2] = k;
          m++;
        }
      }
    }
  }
  cout << m << endl;
  for (int i = 0; i < m; i++) {
    cout << n << "=" << a[i][0] << "+" << a[i][1] << "+" << a[i][2] << endl;
  }
  return 0;
}
