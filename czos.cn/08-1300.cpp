/* 1300: 【入门】小明暑假的零花钱
题目描述
小明同学的妈妈在期末考试之后决定根据小明的考试成绩奖励小明不同的暑假零花钱，如果考试成绩在90分以上（包括90分），零花钱是成绩的3倍，如果考试成绩在80~90之间（包括80不包括90），零花钱是成绩的2倍，如果成绩在70~80之间（包括70不包括80），零花钱就是成绩的分数值，如果成绩在70以下，那么暑假只有50元的零花钱。
请从键盘读入小明同学的考试成绩（0~100之间的整数），根据考试成绩计算小明暑假应得的零花钱。
输入
键盘读入一个整数n代表小明同学的考试成绩（0~100之间）
输出
小明暑假的零花钱的金额
样例输入
90
样例输出
270
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n; //成绩
  cin >> n;
  //判断
  if (n >= 90)
  {
    cout << n * 3 << endl;
  }
  else if (n >= 80)
  {
    cout << n * 2 << endl;
  }
  else if (n >= 70)
  {
    cout << n << endl;
  }
  else
  {
    cout << 50 << endl;
  }

  return 0;
}
