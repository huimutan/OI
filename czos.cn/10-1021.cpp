/* 
1021: �����š�����II

��Ŀ����
��1��500�У��ҳ���ͬʱ������3����2����5����3����7����2����������
����
��

���
���ɸ���
ÿ��һ��
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1;
  while (i <= 500)
  {
    if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
    {
      cout << i << endl;
    }
    i++;
  }

  return 0;
}
