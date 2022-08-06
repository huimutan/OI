/*1240 - 【基础】念数字
题目描述
编一个“念数字”的程序。当你输入一个0-99之间的数后，
计算机就会用汉语拼音输出这个数的“念”法。

比如：35，念出来应该是：san shi wu；
16念出来应该是shi liu，0念出来应该是ling！

输入
一行，一个整数。
输出
一行，这个整数的念法

样例
输入
35
输出
san shi wu
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
void nianshuzi(int n) {
  string shuzi[10] = {"ling", "yi",  "er", "san", "si",
                      "wu",   "liu", "qi", "ba",  "jiu"};
  // string b[10] = {"ge",     "shi",    "bai",     "qian",   "wan",
  //                 "shiwan", "baiwan", "qianwan", "baiwan", "yi"};
  cout << shuzi[n];
}
int main() {
  int n;
  cin >> n;
  if (n < 10)
    nianshuzi(n);  //一位数，直接读
  else {
    //两位数，判断个位和十位
    int s = n / 10;
    int g = n % 10;
    if (s != 1) {  //十位不为1，要读出来
      nianshuzi(s);
      cout << " ";
    }
    cout << "shi ";  // shi必读
    // 个位不为0，要读出来
    if (g != 0) nianshuzi(g);
  }
  return 0;
}
