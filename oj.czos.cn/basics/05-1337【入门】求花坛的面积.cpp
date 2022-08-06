/*
作者:xingdian119@163.com
题目:1337: 【入门】求花坛的面积
*/

/* 
题目描述
   龙湖校区有一个圆形花坛，量得花坛周围的篱笆长是x米，
   请问该花坛的面积是多少平方米？（假设π=3.14）（5.2.99）
输入
    一个小数x
输出    
    花坛的面积（结果保留2位小数）
样例输入
    18.84
样例输出
    28.26
提示
    圆的面积和周长求解公式分别如下；
    圆的面积S = π * 半径 * 半径；（π读作pài，π = 3.1415926…，在具体的题目中π的值精确到小数点后多少位，取决于具体的题目）
    圆的周长C = π * 2 * 半径；
 */
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double x; //篱笆长
    cin >> x;
    double pi = 3.14, r; //篱笆半径
    r = x / (pi * 2);
    double S; //篱笆面积
    S = pi * r * r;
    cout << fixed << setprecision(2) << S << endl; //输出结果四舍五入保留两位小数

    return 0;
}