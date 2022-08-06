/*
1065 - 【入门】字符图形1-星号矩形
题目描述
打印字符图形。输出n行n列"*"

输入
一个整数 n(0 ＜ n ＜ 10)

输出
一个矩形字符图形

样例
输入复制
3
输出复制
***
***
***
来源
嵌套循环
*/

#include <iostream>
using namespace std;
int main()
{
  // n代表总共有n行
  int i, n, j;
  cin >> n;
  //循环产生n行
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      cout << '*';
    }
    //当第i行的n个星输出结束，补充输出换行符
    cout << endl;
  }

  return 0;
}
