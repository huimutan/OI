/*1100 - 【入门】词组缩写
题目描述
定义：一个词组中每个单词的首字母的大写组合称为该词组的缩写。
比如，C语言里常用的EOF就是end of file的缩写。
输入
测试数据占一行，有一个词组，每个词组由一个或多个单词组成；
每组的单词个数不超过10个，每个单词有一个或多个大写或小写字母组成；
单词长度不超过10，由一个或多个空格分隔这些单词。

输出
输出规定的缩写

样例
输入
end of file
输出
EOF
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int i;
  //读入字符串
  getline(cin, s);
  s = " " + s;
  //其余字符，如果当前字符不是空格且上个字符是空格是首字母
  for (i = 1; i < s.size(); i++) {
	  //如果是首字母
	  if (s[i] != ' ' && s[i - 1] == ' ') {
		  cout << (char)toupper(s[i]);
	  }
  }
  return 0;
}
