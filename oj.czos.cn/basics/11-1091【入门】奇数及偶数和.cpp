/* 
1091: �����š�������ż����

��Ŀ����
����һ��������n��1��n��1000�������1��2������n��ȫ���������Լ�ȫ��ż���ĺ͡�
���磺n=9
������ 1+3+5+7+9=25
ż���� 2+4+6+8=20
����
һ������n��
���
һ�У���������ż���ͣ��м�һ��" "���ո񣩡�
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int ji=0, ou=0; 
  for (int i = 1; i <= n; i++)
  {
    //�ж���ż
    if (i %2== 0 )
    {
      // cout << i << endl;
      ou = ou + i;
    }else
    {
      // cout << i << endl;
      ji = ji + i;
    }
    
  }
  cout << ji<<" "<<ou << endl;

  return 0;
}
