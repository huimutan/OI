/* 
1230: �����š�������

��Ŀ����
�����n�еĺ��������״��nһ����һ��������

����
һ������n������ͼ�ε�������

���
n�е�ͼ��

��������
9
�������
*****
****
***
**
*
**
***
****
*****
*/

#include <iostream>
using namespace std;
int main()
{

	int n, i, j;
	cin >> n;

	for (i = n / 2; i >= 0; i--)
	{
		for (j = i + 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
