/*1238 - 【入门】统计每个月兔子的总数
题目描述
有一对兔子，从出生后第3个月起每个月都生一对兔子，一对小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问第n个月（n<=50）的兔子总数为多少对？

输入
输入1个整数n，表示第几个月

输出
第n个月兔子的总数量有多少对？

样例
输入
9
输出
34
来源
递归 递推

标签
递归递推
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  A(n)=A(n-l)+A(n-2)
  */
  // x y代表第n个月的前两个月兔子的数量,r代表第n个月兔子的数量
  long long x, y, r, i, n;
  cin >> n;
  x = 1;  //第1个月
  y = 1;  //第2个月
  for (i = 3; i <= n; i++) {
    r = x + y;  //第x个月
    x = y;
    y = r;
  }
  //如果是问第一个月或者第二个月
  if (n == 1 || n == 2) {
    cout << 1 << endl;
  } else {
    cout << r << endl;
  }
}