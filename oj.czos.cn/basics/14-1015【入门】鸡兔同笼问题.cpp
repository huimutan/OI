/* 1015 - 【入门】鸡兔同笼问题
题目描述
鸡兔同笼问题：一个笼子里面有鸡若干只，兔若干只。共有头50个，共有腿160条。求鸡兔各多少只？（6.2.32）

输入
无
输出
两个整数，在一行。
鸡的只数 兔的只数 中间空格隔开！

来源
需要找规律的循环

标签
需要找规律的循环 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //定义变量j,t分别代表鸡的只数和兔子的只数
    int j,t;
    for (j = 1; j <= 49; j++)
    {
        //兔子+鸡=50
        t = 50 - j;
        //当腿的数量=160,总只数=50,就输出j,t
        if ((2 * j + 4 * t) == 160)
        {
            cout << j << " " << t << endl;
        }
    }
    return 0;
}