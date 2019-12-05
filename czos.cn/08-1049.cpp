/* 1049: 【入门】汉译英
题目描述
输入某个整数，如果输入的整数在1-9范围内，则输出相对应的单词，否则输出'out'
输入
一行，一个整数n。
输出
整数n相对应的小写英文单词或'out'。
样例输入
1
样例输出
one
*/

//#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  int n; //一个整数
  cin >> n;
  //判断
  if (n == 1)
  {
    cout << "one" << endl;
  }
  else if (n == 2)
  {
    cout << "two" << endl;
  }
  else if (n == 3)
  {
    cout << "three" << endl;
  }
  else if (n == 4)
  {
    cout << "four" << endl;
  }
  else if (n == 5)
  {
    cout << "five" << endl;
  }
  else if (n == 6)
  {
    cout << "six" << endl;
  }
  else if (n == 7)
  {
    cout << "seven" << endl;
  }
  else if (n == 8)
  {
    cout << "eight" << endl;
  }
  else if (n == 9)
  {
    cout << "nine" << endl;
  }
  else
  {
    cout << "out" << endl;
  }

  return 0;
}
