/*1095 - 【入门】字符图形11-字母正三角
题目描述
输入一个整数打印字符图形

输入
一个整数（０＜Ｎ＜１０）

输出
一个字符图形

样例
输入复制
4
输出复制
   A
  ABC
 ABCDE
ABCDEFG
来源
字符型

标签
字符型
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  思路：先打印对应的简单的数字三角，再转换为字母三角
    1
   222
  33333
  */
  int i, j, n;
  char c;
  cin >> n;
  //循环控制行数
  for (i = 1; i <= n; i++) {
    //第i行有n-i个空格
    for (j = 1; j <= n - i; j++) {
      cout << ' ';
    }
    //第i行有2*i-1个数字
    for (j = 1; j <= 2 * i - 1; j++) {
      // 1->'A' 2->'B' 3->'C
      c = j + 64;
      cout << c;
    }
    cout << endl;
  }
  return 0;
}
