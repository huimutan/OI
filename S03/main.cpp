#pragma clang diagnostic ignored "-Winvalid-source-encoding" //����һ��������ʾ
#include <iostream>
using namespace std;
int main()
{

    int strawberry;             //����һ������Ϊ��ݮ�ı���
    cout << strawberry << endl; //�����������ֵ����ʼֵ�������
    strawberry = 1;             //Ϊ������ֵ
    strawberry = 11;            //�޸ı�����ֵ���������ݴ浽������ʱ��������ԭ����ֵ��Ϊ��ֵ��
    //int strawberry; //�ٴζ����ݮ��ֵ��������? �ڴ��в�����������ͬ������������
    int peach = 2, pitaya = 3;
    //ͬ�������Ӻͻ�����������ͬʱ��ֵ��

    //...........................

    //�����ε����S=a*h/2
    double a = 3, h = 5, s;
    s = a * h / 2;
    cout << s << endl;

    //����������ʽ
    //дһ�����򣬵����������α߳������������ܳ��������S=4*a��S=a*a
    double a2, s2;
    cin >> a2;
    s2 = a2 * a2;
    cout << s2;

    return 0;
}
