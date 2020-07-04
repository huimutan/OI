/* 
1230: 【入门】蝴蝶结

题目描述
请输出n行的蝴蝶结的形状，n一定是一个奇数！

输入
一个整数n，代表图形的行数！

输出
n行的图形

样例输入
9
样例输出
*****
****
***
**
*
**
***
****
*****
*/

#include <iostream>
using namespace std;
int main()
{

	int n, i, j;
	cin >> n;

	for (i = n / 2; i >= 0; i--)
	{
		for (j = i + 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
