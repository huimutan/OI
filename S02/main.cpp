#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>
using namespace std;
int main()
{
    //��һ�����򣬻���...........................
    cout << "��Ҫ���и�һ����һ��һ������������Ҫ�ǲ��и�һ�в���һ��һ�в������в��С�";

    //�ڶ������򣬱����ĸı�...........................
    int litchi;
    litchi = 22;
    cout << "litch=" << litchi << endl;
    litchi = 33;
    cout << "litch=" << litchi << endl;
    litchi = litchi / 3;
    cout << "litch=" << litchi << endl;

    //����������,�������͵�ת��...........................
    int money = 23.5;
    cout << "money=" << money << endl;

    //���ĸ�����,�����ε���� s=a*h...........................
    // int a = 3, h = 3;
    // float s = a * h / 2;
    // cout << "s=" << s << endl;

    //�޸ĺ�
    int a = 3, h = 3;
    float s = a * h / 2.0; //��ǿ��ת��float��2��
    cout << "s=" << s << endl;

    //���������,ѧϰ�������...........................
    int one, two;
    cin >> one >> two;
    cout << one << " and " << two;

    return 0;
}
