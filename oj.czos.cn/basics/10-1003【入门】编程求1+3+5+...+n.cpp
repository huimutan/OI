/* 
1003: �����š������1+3+5+...+n

��Ŀ����
�����1+3+5+...+n
����
����һ�У�ֻ��һ������n (1<=n<=9999) ����nΪ������
���
���ֻ��һ��
��������
99
�������
2500
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1, n, s = 0;
  cin >> n;
  while (i <= n)
  {
    if (i % 2 == 1)
    {
      s = s + i;
    }
    i++; //i=i+1
  }
  cout << s << endl;
  return 0;
}
