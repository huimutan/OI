/* 1390: �����š���λ���ĺ�
��Ŀ����
��Ӽ��̶���һ����λ�������������λ��������λ�ĺ��Ƕ��٣�
����
һ����λ����n
���
�����λ������λ�ĺ�
��������
3456
�������
18
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x; //��λ��
  cin >> x;
  int qianwei = x / 1000;
  int baiwei = x / 100 % 10; //����baiwei = x % 1000 / 100;
  int shiwei = x / 10 % 10;  //����shiwei = x % 100 / 10;
  int gewei = x % 10;
  cout << qianwei + baiwei + shiwei + gewei;

    return 0;
}
