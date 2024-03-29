/*1148 - 【入门】数数小木块
题目描述
在墙角堆放着一堆完全相同的正方体小木块，如下图所示：

因为木块堆得实在是太有规律了，你只要知道它的层数就可以计算所有木块的数量了。

输入
只有一个整数 n ，表示这堆小木块的层数，已知1 <= n <= 100 。

输出
只有一个整数，表示这堆小木块的总数量。

样例
输入
5
输出
35
来源
函数问题 递归

标签
函数问题递归
*/
#include <bits/stdc++.h>
using namespace std;
int num(int n) {
  int r;
  if (n == 1) {
    r = 1;
  } else {
    r = num(n - 1) + n;
  }
  return r;
}
int main() {
  int n;
  cin >> n;
  double s = 0;
  for (int i = 1; i <= n; i++) {
    s += num(i);
  }
  cout << s;
  return 0;
}
