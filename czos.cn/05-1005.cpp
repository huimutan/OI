/*
����:xingdian119@163.com
��Ŀ:1005: �����š���֪һ��Բ�İ뾶������Բ��������ܳ�
*/

/* 
��Ŀ����
��֪һ��Բ�İ뾶������Բ��������ܳ�
����
����ֻ��һ�У�ֻ��1��������
���
���ֻ�����У�һ�������һ���ܳ�����������λС������ ��pi=3.1415926
��������
1
�������
3.14
6.28
��ʾ
Բ��������ܳ���⹫ʽ�ֱ����£�
Բ�����S = �� * �뾶 * �뾶�����ж���p��i���� = 3.1415926�����ھ������Ŀ�Це�ֵ��ȷ��С��������λ��ȡ���ھ������Ŀ��
Բ���ܳ�C = �� * 2 * �뾶��
 */
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int r; //�뾶
    cin >> r;
    double S; //Բ�����
    S = 3.1415926 * r * r;
    double C; //Բ���ܳ�
    C = 3.1415926 * 2 * r;
    cout << fixed << setprecision(2) << S << endl; //�������������뱣����λС��
    cout << fixed << setprecision(2) << C << endl; //�������������뱣����λС��

    return 0;
}