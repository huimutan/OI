/*B. �����š�����һ����λ�����Ѹ�λ�Ͱ�λ�Ե������
��Ŀ����
����һ����λ��Ȼ����Ȼ���������İ�λ�����λ���Ե�������Ե������

����
����һ�У�ֻ��һ������x(100<=x<=999)��

���
���ֻ��һ�У�����1��������

����
����
123
���
321
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int baiwei = x / 100;
  int shiwei = x % 100 / 10;
  int gewei = x % 10;
  cout<< gewei*100+shiwei*10+baiwei;
  return 0;
}
