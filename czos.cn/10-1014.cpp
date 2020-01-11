/* 
1014: 【入门】编程求1+1/2+1/3+...+1/n
题目描述
编程求1+1/2+1/3+...+1/n
输入
输入一行，只有一个整数n(1<=n<=200) 
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个实数。(保留3位小数)  
样例输入
5
样例输出
2.283
提示
来源
简单循环 
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int i = 1, n;
  double he = 0;
  cin >> n;
  while (i <= n)
  {
    he = he + 1.0 / i;
    //cout << he << endl;
    i++; //i=i+1
  }
  cout << fixed<<setprecision(3)<<he << endl;
  return 0;
}
