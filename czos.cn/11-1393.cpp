/* 
1393: �����š���7�޹ص�����

��Ŀ����
һ�����������������ܹ���7����������������һλ��7�����ǳ�Ϊ���������7�йص��������磺14�ܱ�7������17��һλΪ7����������������7�йص�����
���������1~n��n<=999���У���7�޹ص������ܺ��Ƕ��٣�
����1~10����7�޹ص����ĺ�Ϊ��1+2+3+4+5+6+8+9+10=48��
����
һ������n��n<=999��
���
1~n����7�޹ص������ܺ�
��������
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int g, s, b, sum=0; //x��i�ķ�����
  for (int i = 1; i <= n; i++)
  {
    //��λ
    b = i / 100 % 10;
    s = i / 10 % 10;
    g = i % 10;

    //���Բ�λ

    //�жϸ�����7�޹�
    // if(i%7==0 || b==7 || s==7 || g==7){
    //   cout << i << endl;
    //   continue;
    // }
    // sum = sum+i;

    //�жϸ�����7�޹�2
    if (i % 7 != 0 && b != 7 && s != 7 && g != 7)
    {
      // cout << i << endl;
      sum = sum + i;
    }
  }
  cout << sum << endl;

  return 0;
}