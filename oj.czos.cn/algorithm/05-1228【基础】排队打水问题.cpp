/*1228 - 【基础】排队打水问题
题目描述
有n个人排队到r个水龙头去打水，他们装满水桶的时间t1,t2,...,tn为整数且各不相等，
应如何安排他们的打水顺序才能使他们花费的总时间最少？
每个人打水的时间 = 排队的时间 + 实际打水的时间，本题假设一个人打好水，
排在他后面的人接着打水的这个切换过程不消耗时间。
比如，有2个人A和B，他们打水的时间分别是3和2，只有1个水龙头，
这时，如果A先打水，B后打水，那么A和B打水的时间分别为3、3+2（B排队3分钟）。
因此，所有人打水的总时间就是每个人的打水时间及每个人的排队时间的总和。

输入
第1行，两个整数n(1<=n<=500)和r(1<=r<=100)。
第2行，n个正整数t1,t2,...,tn，(1<=ti<=1000)表示每个人装满水桶的时间。

输出
1行，一个正整数，表示他们花费的最少总时间。

样例
输入
4 2
2 6 4 5
输出
23
来源
贪心

标签
贪心
*/
#include <bits/stdc++.h>
using namespace std;
int a[510], r, i, n, s;
int main() {
  cin >> n >> r;
  //读入n个人的打水时间
  for (i = 1; i <= n; i++) {
    cin >> a[i];
  }
  //打得快的人先打,对打水时间升序排序
  sort(a + 1, a + n + 1);
  //计算每个人的总打水时间
  for (i = 1; i <= n; i++) {
    //从第r+1个人开始要重新计算每个人的总打水时间
    if (i >= r + 1) {
      a[i] += a[i - r];  //把他前r位置打水时间加到自己等待时间上来。
    }
    s += a[i];
  }
  cout << s;
}