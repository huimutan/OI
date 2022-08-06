/*1092 - 【入门】aabb
题目描述
查找形如"aabb"的四位完全平方数，也即前两位数字相同，后两位数字也相同。

输入
无
输出
若干行，每行一个符合条件的四位数（从小到大）。

来源
需要找规律的循环
标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[4] = {0};
  for (int i = 1000; i <= 9999; i++) {
    int x = i;  // i用作循环，不能直接处理i；
    for (int j = 0; j <= 3; j++) {
      a[j] = x % 10;
      x /= 10;
    }
    if (a[0] == a[1] && a[2] == a[3] && a[0] != a[2] &&
        sqrt(i) == (int)sqrt(i)) {
      cout << i << endl;
    }
  }
  return 0;
}
