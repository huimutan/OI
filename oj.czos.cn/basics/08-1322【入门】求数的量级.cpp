/* 1322: �����š�������������
��Ŀ����
��һ���ܴ������n��n>=10000��n<=9999999999�������ʸ��������λ��ʲô�����ģ������������ƴ����
��ѡ��λ����wan����ʮ��shi wan��������bai wan����ǧ��qian wan�����ڣ�yi����ʮ�ڣ�shi yi����
�磺n=123456789���������yi
��4.2.15��
����
һ���ܴ������n��n>=10000��n<=9999999999��
���
n������ƴ��
��������
123456789
�������
yi
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n; //�ܴ������
  cin >> n;
  //�ж�
  if (n >= 10000 && n < 100000)
  {
    cout << "wan" << endl;
  }
  else if (n < 1000000)
  {
    cout << "shi wan" << endl;
  }
  else if (n < 10000000)
  {
    cout << "bai wan" << endl;
  }
  else if (n < 100000000)
  {
    cout << "qian wan" << endl;
  }
  else if (n < 1000000000)
  {
    cout << "yi" << endl;
  }
  else if (n < 10000000000)
  {
    cout << "shi yi" << endl;
  }
  else
  {
  }

  return 0;
}
