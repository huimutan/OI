#pragma clang diagnostic ignored "-Winvalid-source-encoding"//����һ��������ʾ
#include <iostream>
using namespace std;
int main()
{
    string a = "��ݮ";
    string b = "â��";
    string c = "������";
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    c = a;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    a = b;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    b = c;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c;
    return 0;
}
