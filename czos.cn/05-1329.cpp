/*
����:xingdian119@163.com
��Ŀ:1329: �����š������ε����
*/

/* 
��Ŀ����
�����������⹫ʽΪ S = (a + b) * h / 2���Ӽ��̶���һ�����ε��ϵ�a���µ�b�͸�h��
���������ε���������������1λС������5.1.15��
����
��������a��b��h
���
���ε����
��������
2 3 5
�������
12.5
 */
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int a, b, h; //�ϵ�a���µ�b�͸�h
    cin >> a >> b >> h;
    double S; //���ε����
    S = (a + b) * h / 2.0;
    cout << fixed << setprecision(1) << S << endl; //�������������뱣��1λС��

    return 0;
}