/* 1035: �����š��жϳɼ��ȼ�
��Ŀ����
����ĳѧ���ɼ������86������(����86�֣��������VERY GOOD�� �������60��85֮����������GOOD��(����60��85)��С��60���������BAD����
����
����ֻ��һ�У�����1��������
���
���ֻ��һ�У�����ζ��ĩβ��һ���س����ţ���
��������
80
�������
GOOD
*/

#include <iostream>
using namespace std;

int main()
{
  int n; //�ɼ�
  cin >> n;
  //�ж�
  if (n >= 86)
  {
    cout << "VERY GOOD" << endl;
  }
  else if (n >= 60)
  {
    cout << "GOOD" << endl;
  }
  else
  {
    cout << "BAD" << endl;
  }

  return 0;
}
