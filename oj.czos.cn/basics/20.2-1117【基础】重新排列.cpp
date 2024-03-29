/*1117 - 【基础】重新排列
题目描述
现在有一个18位以内的自然数，你可以将组成这个数的各位数字重新排列，
得到一个数值为最小的新数，但新数的位数保持不变。请编程打印出重新排列后的新数。
（如：231重新排序后位数不变的最小数是123，而23105重新排序后位数不变的最小数是10235。）

输入
一个整数（位数 <= 18）

输出
重新排列后最小的新数

样例
输入
382
输出
238
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s[0] == '0') {
    for (int i = 1; s[i]; i++) {
      //找到第一个非0元素
      if (s[i] != '0') {
        swap(s[i], s[0]);
        break;
      }
    }
  }
  cout << s;
  return 0;
}
