/*1336 - 【提高】分数计算
题目描述
从键盘读入一个分数算式，为2个分数做加法或者减法，请输出分数算式的结果，结果也用分数表达，且约分到最简形式。（请注意：做减法可能得到负的分数，如果是负数要输出负号-，如1/15-4/15结果为-1/5）（5.1.76）

输入
分数表达式；分数表达式中，每个分数的分子和分母都是正整数（不超过1000），两个分数中的运算符，可能是加号，也可能是减号，且分数表达式不含空格；

输出
分数表达式计算的结果；

样例
输入
1/12+5/12
输出
1/2
说明
注意考虑特殊情况,如:1/2+1/2=1,1/2-1/2=0,这些情况下结果不需要表现为分数形式。

来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
//定义函数，求最大公约数
int gys(int a, int b) {
  int t;
  while (a % b != 0) {
    t = a % b;
    a = b;
    b = t;
  }
  return b;
}
// s:表达式
// s1:左边的分数，s2:右边的分数
// fz1,fm1:第一个分数的分子分母
string s, s1, s2, fz1, fm1, fz2, fm2;
//整数存放分子和分母
int a1, b1, a2, b2;
int p;       //存放运算符+或-的下标
int r1, r2;  //存放计算结果的分子和分母
int t;
char c, f;  //方法2读入数据-----------------
int main() {
  /*   cin >> s;
    // 1/12+5/12
    p = s.find("+");
    //说明是减法运算
    if (p == -1) {
      p = s.find("-");
    }
    s1 = s.substr(0, p);
    s2 = s.substr(p + 1);
    // cout<<s1<<""<<s2;
    // 1/12
    fz1 = s1.substr(0, s1.find("/"));
    fm1 = s1.substr(s1.find("/") + 1);
    fz2 = s2.substr(0, s2.find("/"));
    fm2 = s2.substr(s2.find("/") + 1);
    // cout<<fz1<<" "<<fm1<<endl<<fz2<<" "<<fm2;
    a1 = stoi(fz1);
    b1 = stoi(fm1);
    a2 = stoi(fz2);
    b2 = stoi(fm2); */
  cin >> a1 >> c >> b1 >> f >> a2 >> c >> b2;  //方法2读入数据-----------------
  //计算结果的分母
  r2 = b1 * b2;
  //计算结果的分子
  //   if (s.find("+") != -1) {
  if (f == '+') {
    //方法2判断----------------------
    r1 = a1 * b2 + a2 * b1;
  } else {
    r1 = a1 * b2 - a2 * b1;
    if (r1 < 0) {
      cout << "-";
      r1 = r1 * -1;
    }
  }
  // cout<<r1<<"/"<<r2;
  t = gys(r1, r2);
  //如果分子是分母的倍数，则直接除掉
  if (r1 % r2 == 0) {
    cout << r1 / r2;
  } else {
    cout << r1 / t << "/" << r2 / t;
  }
}
