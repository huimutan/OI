/*
作者:xingdian119@163.com
题目:1005: 【入门】已知一个圆的半径，求解该圆的面积和周长
*/

/* 
题目描述
已知一个圆的半径，求解该圆的面积和周长
输入
输入只有一行，只有1个整数。
输出
输出只有两行，一行面积，一行周长。（保留两位小数）。 令pi=3.1415926
样例输入
1
样例输出
3.14
6.28
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
    int r; //半径
    cin >> r;
    double S; //圆的面积
    S = 3.1415926 * r * r;
    double C; //圆的周长
    C = 3.1415926 * 2 * r;
    cout << fixed << setprecision(2) << S << endl; //输出结果四舍五入保留两位小数
    cout << fixed << setprecision(2) << C << endl; //输出结果四舍五入保留两位小数

    return 0;
}