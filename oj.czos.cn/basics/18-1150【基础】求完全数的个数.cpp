/*1150 - ������������ȫ���ĸ���
��Ŀ����
һ��������������ȫ�����ӵĺͣ���ƴ���Ϊ��ȫ�������磺6������1,2,3��ͬʱ6=1+2+3������6����ȫ����

����
һ�������� N(10 ��N ��100000)
���
С�ڵ���N����ȫ���ĸ�����

����
����
10
���
1
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
int wanquan(int n) {
  int s = 0;
  for (int i = 2; i <= sqrt(n); i++) {  //���ַ���
    if (n % i == 0) {
      if (i == n / i)
        s += i + 1;
      else
        s = s + i + 1 + n / i;
    }
  }
  return s;
}
int main() {
  int n, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    // cout << wanquan(i) << " " << i << endl;
    if (wanquan(i) == i) {
      c++;
    }
  }
  cout << c;
  return 0;
}
