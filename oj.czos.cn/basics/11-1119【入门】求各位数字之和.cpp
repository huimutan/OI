/* 1119 - 【入门】求各位数字之和
题目描述
输入一个正整数N（0 <= N <= 2147483647），求它的各位数字之和。

输入
一行，一个正整数N。

输出
一行，一个整数。

样例
输入复制
189
输出复制
18 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    //当n!=0则循环
    while (n != 0)
    {
        // cout<<n % 10<<endl;
        s = s + n % 10;
        n = n / 10;
    }
    cout << s << endl;
    return 0;
}
