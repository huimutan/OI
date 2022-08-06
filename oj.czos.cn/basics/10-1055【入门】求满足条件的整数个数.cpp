/* 
1055: 【入门】求满足条件的整数个数
题目描述
在1~n中，找出能同时满足用3除余2，用5除余3，用7除余2的所有整数的个数,如果没有请输出0。
输入
输入一行，只有一个整数n(1<=n<=2000)
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
100
样例输出
1
*/

#include <iostream>
using namespace std;
int main()
{
  /*   //初始值
  int i = 1;
  //循环条件
  while (i <= 10)
  {
    cout << i << endl;
    //让循环停止
    i++;
  } */

  int n, c = 0;
  cin >> n;
  while (n >= 1)
  {
    if (n % 3 == 2 && n % 5 == 3 && n % 7 == 2)
    {
      //cout << n << endl;
      c++;
    }
    n--;
  }
  cout << c << endl;
  return 0;
}
