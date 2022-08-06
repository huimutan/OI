/* 
1091: 【入门】奇数及偶数和

题目描述
给出一个正整数n（1≤n≤1000），求出1，2，……n中全部奇数和以及全部偶数的和。
例如：n=9
奇数和 1+3+5+7+9=25
偶数和 2+4+6+8=20
输入
一个整数n。
输出
一行，奇数和与偶数和，中间一个" "（空格）。
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int ji=0, ou=0; 
  for (int i = 1; i <= n; i++)
  {
    //判断奇偶
    if (i %2== 0 )
    {
      // cout << i << endl;
      ou = ou + i;
    }else
    {
      // cout << i << endl;
      ji = ji + i;
    }
    
  }
  cout << ji<<" "<<ou << endl;

  return 0;
}
