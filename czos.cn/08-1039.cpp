/* 1039: �����š����������������
��Ŀ����
��֪���������ȵ����������е�������ҳ�����
����
����ֻ��һ�У�����3��������֮����һ���ո�ֿ���
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��������
��������
1 5 8
�������
8
 */

//#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  int a, b, c; //�������������
  cin >> a >> b >> c;
  //�ж�
  if (a > b && a > c)
  {
    cout << a << endl;
  }
  else if (b > c)
  {
    cout << b << endl;
  }
  else
  {
    cout << c << endl;
  }

  return 0;
}
