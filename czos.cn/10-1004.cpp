/* 

1004: �����š������1*2*3*...*n
��Ŀ����
�����1*2*3*...*n
����
����һ�У�ֻ��һ������n(1<=n<=10)
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ�������1��������
��������
5
�������
120
*/

#include <iostream>
using namespace std;
int main()
{
  int n,a=1,jieguo=1;
  cin >> n;


  while (n>=a)
  {
    //cout << "n="<<n<< "a="<<a<<endl;
    jieguo = jieguo * a;
    a++;//i=i+1
    
}
cout << jieguo<<endl;

    return 0;
}
