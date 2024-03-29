/* 1068 - 【入门】字符图形4-星号正三角
题目描述
输入一个整数打印字符图形

输入
一个整数（０＜Ｎ＜１０）

输出
一个字符图形，例如，输入3，则输出图形如下：（为方便统计，□代表空格，×代表*）
□□×
□×××
×××××

样例
输入复制
3
输出复制
  *
 ***
*****
来源
嵌套循环 */
#include <iostream>
using namespace std;
int main()
{
    /*
    思路：产生n行的图形比如，n=3
    i=1 2个空格 1个星
    i=2 1个空格 3个星
    i=3 0个空格 5个星
    第i行n-i个空格 2*i-1个星*/
    int n, i, j;
    cin >> n;
    //循环产生n行
    for (i = 1; i <= n; i++)
    {
        //第i行有n-i个空格
        for (j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        //第i行有2*i-1个星
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        //第i行的空格和星输出结束，输出换行
        cout << endl;
    }
}