/* 
1021: 【入门】求数II

题目描述
在1—500中，找出能同时满足用3除余2，用5除余3，用7除余2的所有整数
输入
无

输出
若干个数
每行一个
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1;
  while (i <= 500)
  {
    if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
    {
      cout << i << endl;
    }
    i++;
  }

  return 0;
}
