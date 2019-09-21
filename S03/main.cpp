#pragma clang diagnostic ignored "-Winvalid-source-encoding"//跳过一个错误提示
#include <iostream>
using namespace std;
int main()
{
    string a = "草莓";
    string b = "芒果";
    string c = "火龙果";
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    c = a;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    a = b;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    b = c;
    cout << "a=" << a << "\nb=" << b << "\nc=" << c;
    return 0;
}
