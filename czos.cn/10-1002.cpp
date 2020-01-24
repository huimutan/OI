/* 
1002: 【入门】编程求解1+2+3+...+n

题目描述
编程求解下列式子的值：S=1+2+3+...+n
输入
输入一行，只有一个整数n(1<=n<=1000)
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
100
样例输出
5050
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1, n, s = 0;
  cin >> n;
  while (i <= n)
  {

    s = s + i;

    i++; //i=i+1
  }
  cout << s << endl;
  return 0;
}
