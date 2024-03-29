/*1408 - 【入门】合法的变量名？
题目描述
James在一节C++课程上，准备为自己的程序定义变量名称。老师告诉James，一个合法的变量名应该满足如下的三个条件：

1、只能由字母（大写或者小写）、数字及下划线（_）组成

2、不能以数字开头

3、不能是C++中有特殊含义的单词，由于James是C++的初学者，只学过int、double、cout、cin这四个有特殊含义的单词，因此James只要避开这几个单词就可以。

请你编程帮助James判断他定义的变量名是否合法。

下表中列举了一些合法的变量名和非法的变量名的案例供你参考。

合法变量名案例

非法变量名案例

x

sum

sum_x

sum2

_sum

INT注意：这是合法的，因为在C++中是区分大小写的，int是表示整数类型，但INT不是）；

sum x：有空格（只能是字母、数字或下划线）

1x：以数字开头

int：有特殊含义

a#：有特殊字符“#”（只能是字母、数字、下划线）。



输入
一行，包含一个字符串，是James为变量起的名字，且长度不大于20。

输出
一行，如果是合法的C++变量名，则输出yes，否则输出no。

样例
输入
sum
输出
yes
输入
sum x
输出
no
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  bool f = true;    //假设合法
  getline(cin, s);  //判断非法的情况
  // 1、变量名含有除了字母数字下划线以外的字符
  for (int i = 0; i < s.size(); i++) {
    if ((isalpha(s[i]) || isdigit(s[i]) || s[i] == '_') == false) {
      f = false;
      break;
    }
  }
  // 2、以数字开头
  if (isdigit(s[0])) {
    f = false;
  }
  // 3、含有4个关键词
  if (s == "int" || s == "double" || s == "cin" || s == "cout") {
    f = false;
  }
  if (f) {
    cout << "yes";
  } else {
    cout << "no";
  }
}