/*
作者:xingdian119@163.com
题目:1000: 【入门】熟悉一下Online Judge的环境
*/
/* 题目描述
请不要笑。用来适应环境的题目，自然比较简单些。 计算2个整数的和。这两个整数都在1到100之间。
输入
输入只有一行，包括2个整数a, b。之间用一个空格分开。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
1 2
样例输出
3 */
#include <iostream>
using namespace std;
int main()
{
    int a, b;                  //定义两个变量名
    while (cin >> a >> b)      //从标准输入流中输入两个整数
        cout << a + b << endl; //输出到标准输出流中
    return 0;
}