#pragma clang diagnostic ignored "-Winvalid-source-encoding"
#include <iostream>
using namespace std;
int main()
{
    //第一个程序，换行
    cout << "人要是行" << endl;
    cout << "干一行" << endl;
    cout << "行一行" << endl;
    cout << "一行行" << endl;
    cout << "行行行" << endl;
    cout << "人要是不行" << endl;
    cout << "干一行" << endl;
    cout << "不行一行" << endl;
    cout << "一行不行" << endl;
    cout << "行行不行" << endl;
    //做个试验 ,两数交换
    int x = 1, y = 2, z = 3;
    z = x;
    x = y;
    y = z;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    //...........................
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
