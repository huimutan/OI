/* 
1058: �����š����100��999��Χ�ڵ�����ˮ�ɻ�����
��Ŀ����
��νˮ�ɻ���������ָ��λ��������֮�͵��ڸ���������a^3��Ϊa��������������a��a��a��ֵ�����磺��Ϊ153=1^3+5^3+3^3������153��һ��ˮ�ɻ�����
����
��
���
�����У�ÿ��һ����������ʾ�÷�Χ�ڵ�����ˮ�ɻ���������С�����˳�������
��ʾ
��Դ
��ѭ�� 
*/

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
  int i = 100;
  int ge, shi, bai, he;
  while (i <= 999)
  {
    bai = i / 100;
    shi = i % 100 / 10;
    ge = i % 10;
    he = ge * ge * ge + shi * shi * shi + bai * bai * bai;
    //cout << i<<"="<<bai << " "<<shi<<" "<<ge<<endl;
    //cout << " ��="<<he<<endl;
    if (i == he)
    {
      cout << i << endl;
    }
    i++;
  }
  return 0;
}
