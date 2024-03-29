/*1077 - 【入门】桐桐去购物
题目描述
桐桐周末陪妈妈到市场购物。她和妈妈来到一个买鸡的摊位，
发现鸡的价格有三种：公鸡每只5元钱，母鸡每只3元钱，小鸡3只1元钱。
妈妈就给桐桐出了一道计算题：如果用n元钱买m只鸡，
问公鸡、母鸡和小鸡可以各买多少只？
注意：必须把n元钱正好用完，且买的各种鸡的只数为大于等于0的整数。
桐桐回到家里便拿起笔来认真计算，算了好久还没得出答案。
聪明的你通过编写程序帮助桐桐找出结果好吗？

输入
只有1行，两个数n和m ( 0<n,m<=20000 )。
输出
有若干行，每行三个数，分别为公鸡、母鸡和小鸡的只数，用空格隔开，
按照公鸡只数升序排列。

样例
输入
100 100
输出
0 25 75
4 18 78
8 11 81
12 4 84

来源
需要找规律的循环
标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;  // n元m只
  cin >> n >> m;
  int i, j, k;  // ijk公鸡母鸡小鸡钱数
  for (int i = 0; i <= n; i += 5) {
    for (int j = 0; j <= n; j += 3) {
      k = n - i - j;
      if (i / 5 + j / 3 + k * 3 == m) {
        cout << i / 5 << " " << j / 3 << " " << k * 3 << endl;
      }
    }
  }

  return 0;
}
