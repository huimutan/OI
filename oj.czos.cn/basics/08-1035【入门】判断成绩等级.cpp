/* 1035: 【入门】判断成绩等级
题目描述
输入某学生成绩，如果86分以上(包括86分）则输出“VERY GOOD” ，如果在60到85之间的则输出“GOOD”(包括60和85)，小于60的则输出“BAD”。
输入
输入只有一行，包括1个整数。
输出
输出只有一行（这意味着末尾有一个回车符号）。
样例输入
80
样例输出
GOOD
*/

#include <iostream>
using namespace std;

int main()
{
  int n; //成绩
  cin >> n;
  //判断
  if (n >= 86)
  {
    cout << "VERY GOOD" << endl;
  }
  else if (n >= 60)
  {
    cout << "GOOD" << endl;
  }
  else
  {
    cout << "BAD" << endl;
  }

  return 0;
}
