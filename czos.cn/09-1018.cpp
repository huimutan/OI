/*
1018: �����š����������
��Ŀ����
������������������������Ϊ�߳����ж��Ƿ񹹳������Σ����������"no",�����������Σ���һ���ж����ǹ����ǣ���������λ�ֱ�������λ�۽�������.�ֱ����"ruijiao","zhijiao","dunjiao"
����
��������
���
һ���ַ���
��������
3 4 5
�������
zhijiao
��ʾ
�����̱ߵ�ƽ���͵���һ�����ߵ�ƽ��ʱΪֱ�������� �����̱ߵ�ƽ����С��һ�����ߵ�ƽ��ʱΪ�۽������� �����̱ߵ�ƽ���ʹ���һ�����ߵ�ƽ��ʱΪ���������
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c, t;
  cin >> a >> b >> c;
  if (a > b)
  {
    t = a;
    a = b;
    b = t;
  }
  if (b > c)
  {
    t = b;
    b = c;
    c = t;
  }

  //cout << a << " " << b << " " << c << endl;
  if (a + b > c)
  {

    if (a * a + b * b == c * c)
    {
      cout << "zhijiao" << endl;
    }
    else if (a * a + b * b < c * c)
    {
      cout << "dunjiao" << endl;
    }
    else if (a * a + b * b > c * c)
    {
      cout << "ruijiao" << endl;
    }
  }
  else
  {
    cout << "no" << endl;
  }
  return 0;
}
