/*1245 - 【入门】求s=a+aa+aaa+aaaa+aa...a的值
题目描述
求s=a+aa+aaa+aaaa+aa...a的值，其中a从键盘读入。
比如：读入2，则s=2+22=24。再比如：读入5，s=5+55+555+5555+55555=61725

输入
一个整数a（a在1~9的范围内）
输出
整数n代表这个算式的结果

样例
输入
2
输出
24
来源
函数问题 递归

标签
函数问题递归
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // string a(10, '1');
  // int p = stoi(a);
  // cout << a;
  int n, result = 0;
  cin >> n;
  for (int j = 0; j < n; j++) {
    //将字符串赋值的次数为n,n-1,n-2,n-3,所以直接将n = n-j,此处j是循环中的
    //变量会随着循环次数的增加而加1，将复制好的字符串转换为int类型进行累加
    string a(n - j, n + '0');
    result += stoi(a);
  }
  cout << result;
  return 0;
}
