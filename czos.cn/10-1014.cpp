/* 
1014: �����š������1+1/2+1/3+...+1/n
��Ŀ����
�����1+1/2+1/3+...+1/n
����
����һ�У�ֻ��һ������n(1<=n<=200) 
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��ʵ����(����3λС��)  
��������
5
�������
2.283
��ʾ
��Դ
��ѭ�� 
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int i = 1, n;
  double he = 0;
  cin >> n;
  while (i <= n)
  {
    he = he + 1.0 / i;
    //cout << he << endl;
    i++; //i=i+1
  }
  cout << fixed<<setprecision(3)<<he << endl;
  return 0;
}
