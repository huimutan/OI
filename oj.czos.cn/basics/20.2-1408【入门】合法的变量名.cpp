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
bool f(char a[]) {
  for (int i = 0; i < 4; i++) {
    if (strcmp(a, "int") == 0 || strcmp(a, "double") == 0 ||
        strcmp(a, "cout") == 0 || strcmp(a, "cin") == 0)
      return 0;
  }
  if (!(a[0] >= 'a' && a[0] <= 'z' || a[0] >= 'A' && a[0] <= 'Z' ||
        a[0] == '_'))
    return 0;
  for (int i = 1; a[i]; i++) {
    if (!(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' ||
          a[i] == '_' || a[i] >= '0' && a[i] <= '9'))
      return 0;
  }
  return 1;
}

int main() {
  char a[25];
  cin.getline(a, 25);

  if (f(a))
    cout << "yes";
  else
    cout << "no";
  return 0;
}