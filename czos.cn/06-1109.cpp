/* 1109: 【入门】加密四位数
题目描述
某军事单位用4位整数来传递信息，传递之前要求先对这个4位数进行加密。加密的方式是每一位都先加上5然后对10取余数，再将得到的新数颠倒过来。
例如：原数是1379，那么每位加5对10取余数的结果为6824，然后颠倒该数，得到新数：4286。
再比如：原数是2570，那么每位加5对10取余数的结果为7025，然后颠倒高数，得到新数：5207。
请根据加密要求，写出加密算法！

输入
加密前的4位数
输出
加密后的结果
样例输入
1379
样例输出
4286
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x; //四位数
  cin >> x;
  int qianwei = x / 1000;
  int baiwei = x / 100 % 10; //或者baiwei = x % 1000 / 100;
  int shiwei = x / 10 % 10;  //或者shiwei = x % 100 / 10;
  int gewei = x % 10;
  cout << (gewei + 5) % 10*1000 + (shiwei + 5) % 10*100 + (baiwei + 5) % 10*10 + (qianwei + 5) % 10*1;

  return 0;
}
