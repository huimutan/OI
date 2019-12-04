/*
1044: 【入门】找出最经济型的包装箱型号

题目描述
已知有A，B，C，D，E五种包装箱，为了不浪费材料，小于10公斤的用A型，大于等于10公斤小于20公斤的用B型，大于等于20公斤小于40公斤的用C型，大于等于40公斤的小于50公斤的用D型，大于等于50公斤小于80公斤的用E型。现在输入一货物的重量（小于80公斤），找出最经济型的包装箱型号。
输入
输入只有一行，包括一个整数。
输出
输出只有一行（这意味着末尾有一个回车符号），包括1个字符。 
样例输入
8
样例输出
A
*/

#include <bits/stdc++.h>
//#include <iomanip>
//#include <iostream>
using namespace std;

int main()
{
  int n; //货物重量
  cin >> n;
  //判断用哪种最经济
  if (n < 10)
  {
    cout << "A" << endl;
  }
  else if (n < 20)
  {
    cout << "B" << endl;
  }
  else if (n < 40)
  {
    cout << "C" << endl;
  }
  else if (n < 50)
  {
    cout << "D" << endl;
  }
  else if (n < 80)
  {
    cout << "E" << endl;
  }

  return 0;
}
