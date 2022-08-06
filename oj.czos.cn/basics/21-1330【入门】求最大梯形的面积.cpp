/*1330 - 【入门】求最大梯形的面积
题目描述
从键盘读入n(3<=n<=100)个梯形的上底、下底和高，请问这n个梯形中，最大面积的梯形的面积是多少？（梯形面积的求解公式为
S = (a + b) * h / 2，也就是(上底 + 下底) * 高 / 2） （5.1.18）

输入
第1行为1个整数n，接下来n行每行3个整数分别代表梯形的上底、下底和高。

输出
最大面积梯形的面积（结果保留1位小数）

样例
输入
3
1 2 3
3 4 5
2 3 4
输出
17.5
来源
二维数组 结构体

标签
二维数组结构体
*/
#include <bits/stdc++.h>
using namespace std;
//至少有3列，所以定义4（从1开始）
int a[101][4];
int main() {
  int n, i;
  double s, max = 0;  // s:临时面积 max:最大梯形面积
  cin >> n;
  for (i = 1; i <= n; i++) {  //第i个梯形，存入3列数据
    cin >> a[i][1] >> a[i][2] >> a[i][3];
  }
  //都存入二维数组后，一个一个梯形计算面积并比较
  for (i = 1; i <= n; i++) {
    s = (a[i][1] + a[i][2]) * a[i][3] * 1.0 / 2;
    if (s > max) {
      max = s;
    }
  }
  cout << fixed << setprecision(1) << max;
  return 0;
}