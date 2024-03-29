/* 1022 - 【入门】百钱百鸡问题
题目描述
用100元钱买100只鸡，公鸡，母鸡，小鸡都要有。公鸡5元1只，母鸡3元1只，小鸡1元3只。请问公鸡，母鸡，小鸡各应该买多少只？

输入
无
输出
每种买法占一行，由3个数组成，顺序为 公鸡数 母鸡数 小鸡数。每个数字空格隔开。
输出时，按公鸡数从少到多，母鸡数从多到少的顺序输出，本题符合条件的第一组解为：4 18 78。

来源
需要找规律的循环
标签
需要找规律的循环 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, x, y;
    //公鸡可能的只数范围
    for (i = 1; i <= (100 - 3 - 1) / 5; i++)
    {
        //买完公鸡剩余的钱
        x = 100 - i * 5;
        //循环x元能买到的母鸡的范围
        for (j = 1; j <= (x - 1) / 3; j++)
        {
            //买完i只公鸡，j只母鸡剩余的钱
            y = x - j * 3;
            if (i + j + y * 3 == 100)
            {
                cout << i << " " << j << " " << y * 3 << endl;
            }
        }
    }
}