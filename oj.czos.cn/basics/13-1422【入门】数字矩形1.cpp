/*
1422 - 【入门】数字矩形(1)
题目描述
从键盘读入一个整数n，输出如下图形
如：n=3，输出
111
222
333

如：n = 5，输出
11111
22222
33333
44444
55555

输入
一个整数n（n<10）

输出
输出n行的图形

样例
输入复制
3
输出复制
111
222
333
来源
嵌套循环
*/

#include <iostream>
using namespace std;
int main()
{
  /*思路：输出n行，每行n个数字
          第1行是1,第2行是2
          归纳得知：第i行是i
      */
  int n, i, j; // n代表总行数
  cin >> n;
  //循环产生n行
  for (i = 1; i <= n; i++)
  {
    //嵌套循环产正第i行的n个数
    for (j = 1; j <= n; j++)
    {
      cout << i;
    }
    //第i行的数字输出结束，输出换行符
    cout << endl;
  }

  return 0;
}
