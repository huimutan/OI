/*1123 - 【基础】表达式的值
题目描述
给出一个表达式,其中运算符仅包含+,要求求出表达式的最终值。
如：1+1，则结果为2，1+2+3则结果为6，12+23则结果35。

输入
仅一行，即为含有正整数和+号的表达式。
输出
仅一行，既为表达式算出的结果（所有数据保证计算结果<=109）。

样例
输入
1+1
输出
2
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
string s, w;  //存放表达式
int x, r, i;
int main() {
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    //如果当前字符是数字,则是连续数字的一部分
    if (isdigit(s[i])) {
      w += s[i];
      //判断连续数字是否结束
      // !表示取反, isdigit() 表示是数字,!isdigit() 表示不是数字
      if (i == s.size() - 1 || !isdigit(s[i + 1])) {
        // cout<<w<<endl;
        r += stoi(w);  //将字符串转换为整数
        w = "";        //清空连续数字,存放下一个数字
      }
    }
  }
  cout << r;
}