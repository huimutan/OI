/*
作者:xingdian119@163.com
题目:1031: 【入门】温度转换
*/

/* 
题目描述
编一程序，将摄氏温度换为华氏温度。公式为：f=9/5*c+32。其中f为华氏温度,c是摄氏温度。（5.2.12）
输入
输入一行，只有一个整数c
输出
输出只有一行，包括1个实数。（保留两位小数）
样例输入
50
样例输出
122.00
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;//摄氏度
    double f;//华氏度
    cin >> c;             //输入摄氏度
    f = 9.0 / 5 * c + 32;
    //输出结果四舍五入保留两位小数
    cout << fixed << setprecision(2)<< f << endl; //计算华氏度
    
    return 0;
}