/* 
1004: 【入门】编程求1*2*3*...*n

题目描述
编程求1*2*3*...*n
输入
输入一行，只有一个整数n(1<=n<=10)
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。
样例输入
5
样例输出
120
*/

#include <iostream>
using namespace std;
int main()
{
  int i = 1, n, s = 1;
  cin >> n;
  while (i <= n)
  {
    s = s * i;
    i++;
  }
  cout << s << endl;
  return 0;
}
