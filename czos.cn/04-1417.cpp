/*
作者:xingdian119@163.com
题目:1417: 【入门】买文具
*/

/* 题目描述
文具店的水笔的单价是一个整数，小明从文具店买了x支水笔花了y元？请问如果你要从该文具店购买5支水笔需要付多少钱？
输入
两个整数x和y，用空格隔开，分别代表小明买的水笔的支数和他付给老板的金额
输出
一个整数，代表如果你买5支水笔，应该付给老板的金额
样例输入
10 20
样例输出
10
 */
#include <iostream>
using namespace std;
int main()
{
    int x, y;                  //定义两个变量名
    cin >> x >> y;             //从标准输入流中输入两个整数
    cout << y/x*5 << endl; //输出到标准输出流中
    return 0;
}