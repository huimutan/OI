/*
1018: 【入门】三角形类别
题目描述
输入三个整数，以这三个数为边长，判断是否构成三角形；若不能输出"no",若构成三角形，进一步判断它们构的是：锐角三角形或直角三角形或钝角三角形.分别输出"ruijiao","zhijiao","dunjiao"
输入
三个整数
输出
一个字符串
样例输入
3 4 5
样例输出
zhijiao
提示
两个短边的平方和等于一个长边的平方时为直角三角形 两个短边的平方和小于一个长边的平方时为钝角三角形 两个短边的平方和大于一个长边的平方时为锐角三角形
*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c, t;
  cin >> a >> b >> c;
  if (a > b)
  {
    t = a;
    a = b;
    b = t;
  }
  if (b > c)
  {
    t = b;
    b = c;
    c = t;
  }

  //cout << a << " " << b << " " << c << endl;
  if (a + b > c)
  {

    if (a * a + b * b == c * c)
    {
      cout << "zhijiao" << endl;
    }
    else if (a * a + b * b < c * c)
    {
      cout << "dunjiao" << endl;
    }
    else if (a * a + b * b > c * c)
    {
      cout << "ruijiao" << endl;
    }
  }
  else
  {
    cout << "no" << endl;
  }
  return 0;
}
