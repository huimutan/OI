#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>
using namespace std;
int main()
{
    //��һ�����򣬻���
    cout << "��Ҫ���и�һ����һ��һ������������Ҫ�ǲ��и�һ�в���һ��һ�в������в��С�";
    //...........................
    //�ڶ������򣬱����ĸı�
    int litchi;
    litchi = 22;
    cout << "litch=" << litchi << endl;
    litchi = 33;
    cout << "litch=" << litchi << endl;
    litchi = litchi / 3;
    cout << "litch=" << litchi << endl;
    //...........................
    //����������,�������͵�ת��
    int money = 23.5;
    cout << "money=" << money << endl;
    //...........................
    //���ĸ�����,�����ε����
    int altitude = 2, base = 4, area;
    area = altitude * base / 2;
    cout << "area=" << area << endl;
    return 0;
}