#pragma clang diagnostic ignored "-Winvalid-source-encoding"//跳过一个错误提示
#include <iostream>
using namespace std;
int main()
{
    // string a = "草莓";
    // string b = "芒果";
    // string c = "火龙果";
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // c = a;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // a = b;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
    // b = c;
    // cout << "a=" << a << "\nb=" << b << "\nc=" << c;

   //第二个程序，变量的改变
    int litchi = 22;
    cout << litchi << endl;
    litchi = 33;
    cout << litchi << endl;
    //...........................
    //第三个程序,变量类型的转换
    float money = 23.5; //int
    cout << money << endl;
    //...........................
    //第四个程序,三角形的面积S=a*h/2
    float a = 2, h = 4, s;
    s = a * h / 2;
    cout << s << endl;
    //第五个程序,学习输入语句...........................
    int one, two;
    cin >> one >> two;
    cout << one << " and " << two;
    //尝试以下算式
    //写一个程序，当输入正方形边长，返回它的面积。S=a*a
    float a2, s2;
    cin >> a2;
    s2 = a2 * a2;
    cout << s2;
    

    return 0;


}
