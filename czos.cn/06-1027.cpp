/* 1027: �����š���������λ��������λ�����ֵĺ�
  ��Ŀ����
����һ���������λ��Ȼ��X����̼����������λ�ϵ�����֮��S��

����
����һ�У�ֻ��һ������x(100<=x<=999)  

���
���ֻ��һ�У�����1������

��������
123
�������
6
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x; //��λ��
  cin >> x;
  int baiwei = x / 100;
  int shiwei = x % 100 / 10;
  int gewei = x % 10;
  cout<< baiwei + shiwei + gewei;

  return 0;
}
