/* 1305: �����š����ĸ����������
��Ŀ����
��֪���ĸ����ȵ����������е�������ҳ�����
����
����ֻ��һ�У�����4��������֮����һ���ո�ֿ���
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��������
��������
1 9 8 6
�������
9
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d; //4����
  cin >> a >> b >> c >> d;
  //�ж�
  if (a > b && a > c && a > d)
  {
    cout << a << endl;
  }
  else if (b > c && b > d)
  {
    cout << b << endl;
  }
  else if (c > d)
  {
    cout << c << endl;
  }
  else
  {
    cout << d << endl;
  }

  return 0;
}
