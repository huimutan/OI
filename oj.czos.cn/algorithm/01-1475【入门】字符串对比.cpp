/*1475 - 【入门】字符串对比
题目描述
给定两个仅由大写字母或小写字母组成的字符串(长度介于1到100之间)，它们之间的关系是以下4种情况之一：
1：两个字符串长度不等。比如  Beijing  和  Hebei
2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如
Beijing  和  Beijing
3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如
beijing  和  BEIjing
4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如
Beijing  和  Nanjing
编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。

输入
包括两行，每行都是一个字符串
输出
仅有一个数字，表明这两个字符串的关系编号

样例
输入
BEIjing
beiJing
输出
3
说明
【来源】蓝桥杯基础训练

来源
蓝桥杯 字符串

标签
蓝桥杯字符串
*/
#include <bits/stdc++.h>
using namespace std;
string myupper(string s) {
  for (int i = 0; i < s.size(); i++) {
    s[i] = toupper(s[i]);
  }
  return s;
}
string a, b;
int main() {
  cin >> a >> b;
  if (a.size() != b.size())
    cout << 1;
  else if (a == b)
    cout << 2;
  else if (myupper(a) == myupper(b))
    cout << 3;
  else
    cout << 4;
  return 0;
}
