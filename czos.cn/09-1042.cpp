/*
1042: �����š���������λ�����Ҵ��������ֵ
��Ŀ����
��������һ����λ�������ٰ����Ĵ�������������һ���µ���λ������ʹ��ֵ���
����
����ֻ��һ�У�����1��������
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��������
��������
470
�������
740
*/

#include <iostream>
using namespace std;
int main()
{
  int a, bai, shi, ge, t;
  cin >> a;
  bai = a / 100, shi = a / 10 % 10, ge = a % 10;
  if (bai < shi)
  {
    t = bai;
    bai = shi;
    shi = t;
  }
  if (shi < ge)
  {
    t = shi;
    shi = ge;
    ge = t;
  }
  if (bai < shi)
  {
    t = bai;
    bai = shi;
    shi = t;
  }
  cout << bai * 100 + shi * 10 + ge << endl;
  return 0;
}
