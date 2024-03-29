/*1114 - 【基础】趣味填空
题目描述
小华的寒假作业上，有这样一个趣味填空题：
给出用等号连接的两个整数，如“1234＝127”。当然，现在这个等号是不成立的。题目让你在左边的整数中间某个位置插入一个加号，看有没有可能让等号成立。以上面的式子为例，如果写成123+4=127，这就可以了。
请你编写一个程序来解决它。

输入
只有那个不相等的式子。已知，等号两边的整数都不会超过2000000000。
输出
如果存在这样的方案，请输出那个正确的式子。如果不存在解决方案，请输出“Impossible!”（引号中的部分）。

样例
输入
1234=127
输出
123+4=127
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
/*
1234=127
第一步：将=左右的整数拆出来
left=1234
right= 127
第二步：将=左侧的数字，能够组合的方案罗列
1+234
12+34
123+4
第三步：
判断罗列方案等式是否成立，成立输出等式
如果无解，输出给定的字符串*/
string s, l, r, s1, s2;
int p, x, y, z;
bool f;  // f默认初值false
int main() {
  cin >> s;
  p = s.find("=");
  l = s.substr(0, p);
  r = s.substr(p + 1);
  z = stoi(r);
  // cout<<l<<""<<r;
  //将左侧字符串1,可行的求和方案罗列
  for (int i = 0; i < l.size() - 1; i++) {
    s1 = l.substr(0, i + 1);
    s2 = l.substr(i + 1);
    // cout << s1 << "" << s2 << end1;
    x = stoi(s1);
    y = stoi(s2);
    if (x + y == z) {
      f = true;
      cout << x << "+" << y << "=" << z << endl;
    }
  }
  //如果不存在可行方案
  if (f == false) {
    cout << "Impossible!";
  }
}