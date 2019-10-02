#pragma clang diagnostic ignored "-Winvalid-source-encoding" //跳过一个错误提示
#include <iostream>
using namespace std;
int main()
{

    int strawberry;             //定义一个名字为草莓的变量
    cout << strawberry << endl; //定义变量不赋值，初始值是随机的
    strawberry = 1;             //为变量赋值
    strawberry = 11;            //修改变量的值，当新数据存到变量中时，变量由原来的值改为新值。
    //int strawberry; //再次定义草莓的值，可以吗? 内存中不能有两个相同变量名的区域。
    int peach = 2, pitaya = 3;
    //同理定义桃子和火龙果，定义同时赋值。

    //...........................

    //三角形的面积S=a*h/2
    double a = 3, h = 5, s;
    s = a * h / 2;
    cout << s << endl;

    //尝试以下算式
    //写一个程序，当输入正方形边长，返回它的周长和面积。S=4*a，S=a*a
    double a2, s2;
    cin >> a2;
    s2 = a2 * a2;
    cout << s2;

    return 0;
}
