/*
作者:xingdian119@163.com
题目:1320: 【入门】时钟旋转（1）
*/

/* 
题目描述
    时钟上面的时针从m时走到n时旋转了多少度？（m<=n，且m和n都是1~12之间的整数）（4.2.4）
输入
    2个整数m和n
输出
    一个整数代表时针旋转的度数
样例输入
    1 4
样例输出
    90
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "可以看";
    int m, n;
    cin >> m >> n;
    cout << (n - m) * 30;
    //system("pause");
    return 0;
}