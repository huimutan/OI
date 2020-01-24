/* 
1059: 【入门】求数
题目描述
输出1—999中有因数3，且至少有一位数字是5的数
输入
无
输出
若干个数 每行一个
提示
来源
简单循环 
*/

#include <iostream>
using namespace std;
int main()
{
  int n = 1, g, s, b;
  while (n <= 999)
  {
    //cout << "n=" << b << s << g << endl;
    if (n % 3 == 0)
    {
      g = n % 10;
      s = (n / 10) % 10;
      b = n / 100;
      if (g == 5 || s == 5 || b == 5)
      {
        cout << n << endl;
      }
    }
    n++;
  }

  return 0;
}
