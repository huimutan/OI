/* 
1059: �����š�����
��Ŀ����
���1��999��������3����������һλ������5����
����
��
���
���ɸ��� ÿ��һ��
��ʾ
��Դ
��ѭ�� 
*/

#include <iostream>
using namespace std;
int main()
{
  int n = 1, g, s, b;
  while (n <= 999)
  {
    //cout << "n=" << b << s << g << endl;
    if (n % 3 == 0)
    {
      g = n % 10;
      s = (n / 10) % 10;
      b = n / 100;
      if (g == 5 || s == 5 || b == 5)
      {
        cout << n << endl;
      }
    }
    n++;
  }

  return 0;
}
