#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>
using namespace std;
int main()
{
    //��һ�����򣬻���
    cout << "��Ҫ����" << endl;
    cout << "��һ��" << endl;
    cout << "��һ��" << endl;
    cout << "һ����" << endl;
    cout << "������" << endl;
    cout << "��Ҫ�ǲ���" << endl;
    cout << "��һ��" << endl;
    cout << "����һ��" << endl;
    cout << "һ�в���" << endl;
    cout << "���в���" << endl;
    //�������� ,��������
    int x = 1, y = 2, z = 3;
    z = x;
    x = y;
    y = z;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    //...........................
    //�ڶ������򣬱����ĸı�
    int litchi = 22;
    cout << litchi << endl;
    litchi = 33;
    cout << litchi << endl;
    //...........................
    //����������,�������͵�ת��
    float money = 23.5; //int
    cout << money << endl;
    //...........................
    //���ĸ�����,�����ε����S=a*h/2
    float a = 2, h = 4, s;
    s = a * h / 2;
    cout << s << endl;
    //���������,ѧϰ�������...........................
    int one, two;
    cin >> one >> two;
    cout << one << " and " << two;
    //����������ʽ
    //дһ�����򣬵����������α߳����������������S=a*a
    float a2, s2;
    cin >> a2;
    s2 = a2 * a2;
    cout << s2;

    return 0;
}
