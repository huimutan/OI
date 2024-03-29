/*1316 - 【入门】橘子称重
题目描述
学校买回来一大箱橘子，有m个（m>=100 && m <= 1000），橘子大小比较均匀，
学校想称一下总共有多重，发现大称坏掉了还没有修好，只有一个小的弹簧秤。学校又不想分开称，那样太慢了。

小明想了一个办法，由于橘子大小比较均匀，可以从中拿n个出来（n>=5 && n<=20），
这n个橘子的重量弹簧秤是可以称出来的，有了这n个橘子的重量，就可以计算出平均一个橘子有多重，这样就能知道整箱大约有多重了。

请编写程序，从键盘读入橘子总数m，小明称的橘子的个数n以及这n个橘子的重量，
计算出这箱橘子总共约有多重（结果保留1位小数）。（4.1.52）

输入
2行，第一行2个整数m和n，分别代表一箱橘子的总个数以及小明称的橘子的个数。

第二行为n个橘子的重量（整数）。

输出
一箱橘子的重量（保留1位小数）

样例
输入
100 7
84 83 82 81 80 79 79
输出
8114.3
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, n, s = 0;
  cin >> m >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  printf("%.1f", s* 1.0 / n  * 100);
  return 0;
}
