#include <iostream>
using namespace std;
int main()
{
    //第一个程序，换行
    cout << "人要是行干一行行一行一行行行行行人要是不行干一行不行一行一行不行行行不行。";
    //...........................
    //第二个程序，变量的改变
    int litchi;
    litchi = 22;
    cout << "litch=" << litchi << endl;
    litchi = 33;
    cout << "litch=" << litchi << endl;
    litchi = litchi / 3;
    cout << "litch=" << litchi << endl;
    //...........................
    //第三个程序,变量类型的转换
    int money = 23.5;
    cout << "money=" << money << endl;
    //...........................
    //第四个程序,三角形的面积
    int altitude = 2, base = 4, area;
    area = altitude * base / 2;
    cout << "area=" << area << endl;
    return 0;
}
