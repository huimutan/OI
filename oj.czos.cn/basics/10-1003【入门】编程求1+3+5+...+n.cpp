/* 
1003: 【入门】编程求1+3+5+...+n

题目描述
编程求1+3+5+...+n
输入
输入一行，只有一个整数n (1<=n<=9999) 这里n为奇数。
输出
输出只有一行
样例输入
99
样例输出
2500
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1, n, s = 0;
  cin >> n;
  while (i <= n)
  {
    if (i % 2 == 1)
    {
      s = s + i;
    }
    i++; //i=i+1
  }
  cout << s << endl;
  return 0;
}
