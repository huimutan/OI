/*
作者:xingdian119@163.com
题目:1329: 【入门】求梯形的面积
*/

/* 
题目描述
梯形面积的求解公式为 S = (a + b) * h / 2。从键盘读入一个梯形的上底a、下底b和高h，
请计算表梯形的面积。（结果保留1位小数）（5.1.15）
输入
三个整数a、b、h
输出
梯形的面积
样例输入
2 3 5
样例输出
12.5
 */
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int a, b, h; //上底a、下底b和高h
    cin >> a >> b >> h;
    double S; //梯形的面积
    S = (a + b) * h / 2.0;
    cout << fixed << setprecision(1) << S << endl; //输出结果四舍五入保留1位小数

    return 0;
}