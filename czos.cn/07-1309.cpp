/*
1309: 【入门】最多能倒多少杯水
题目描述
花花所在的学校引入了电水箱为同学们烧开水。已知电水箱的容量为n升（n<=10L），
同学们带的杯子平均容量为x毫升（x在100~300之间），请问烧一箱开水，最多能倒多少杯（不足1杯算1杯）。（4.1.2）

输入
2个整数n和x；n代表电水箱的总容量（单位为升L），x代表平均1个杯子的容量（单位为毫升ml）

输出
一个整数，代表最多能够倒多少杯水（不足1杯算1杯）

样例输入
1 120
样例输出
9
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x; //n电水箱容量升,x杯子容量毫升
  cin >> n >> x;
  if (n * 1000 % x == 0)
  {
    cout << n * 1000 / x << endl;
  }
  else
  {
    cout << n * 1000 / x + 1 << endl;
  }

  return 0;
}
