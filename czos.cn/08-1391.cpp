/* 1391: �����š���������ֵ���⣿
��Ŀ����
С��ȥ��������ֵ����Ϊ�Լ��Ĺ�������ֵ��������ֵ���ĸ���һ����ֵ�Żݻ����������£�
��1����ֵ200Ԫ~299Ԫ������50Ԫ�����У�
��2����ֵ300Ԫ~499Ԫ������100Ԫ�����У�
��3����ֵ500Ԫ��500Ԫ���ϣ�����200Ԫ�����У�
��4����ֵ200Ԫ���£���û�����ͻ��
���磺С�������ֵ350Ԫ����ôʵ�ʿ��е��˵Ľ�����450Ԫ��350Ԫ��ֵ + 100Ԫ���ͣ���
���̰�����������ֵ���ģ����ݿͻ��ĳ�ֵ������ʵ��Ӧ�����˵Ľ�

����
һ������n������С���ĳ�ֵ��n��1~999֮���������
���
һ������������ʵ�ʵ��˵Ľ��
��������
200
�������
250
*/

//#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  int n; //��ֵ���
  cin >> n;
  //�ж�
  if (n >= 500)
  {
    cout << n + 200 << endl;
  }
  else if (n >= 300)
  {
    cout << n + 100 << endl;
  }
  else if (n >= 200)
  {
    cout << n + 50 << endl;
  }
  else
  {
    cout << n << endl;
  }

  return 0;
}