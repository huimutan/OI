#pragma clang diagnostic ignored "-Winvalid-source-encoding"//����һ��������ʾ
#include <iostream>
using namespace std;
int main()
{
    // string a = "��ݮ";
    // string b = "â��";
    // string c = "������";
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // c = a;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // a = b;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // b = c;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c;

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
