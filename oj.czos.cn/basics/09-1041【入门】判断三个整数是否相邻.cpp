/*
1041: �����š��ж����������Ƿ�����
��Ŀ����
�ж����������Ƿ����ڣ������"TRUE"���������"FALSE"��
����
����ֻ��һ�У�����3��������
���
���ֻ��һ�С�
��������
1 3 2
�������
TRUE
��ʾ
����������һ��������ģ����磺1 3 2�������ڵ�����
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c, t;
  cin >> a >> b >> c;
  if (a < b)
  {
    t = a;
    a = b;
    b = t;
  }
  if (b < c)
  {
    t = b;
    b = c;
    c = t;
  }
  if (a < b)
  {
    t = a;
    a = b;
    b = t;
  }
  //cout << a<<" "<< b<<" "<< c<<endl;
  if (a - b == 1 && b - c == 1)
  {
    cout << "TRUE";
  }
  else
  {
    cout << "FALSE";
  }

  return 0;
}
