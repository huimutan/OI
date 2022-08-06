/*1229 - 【提高】拦截导弹的系统数量求解
题目描述
某国为了防御敌国的导弹袭击，发展出一种导弹拦截系统。但是这种导弹拦截系统有一个缺陷：虽然它的第一发炮弹能够到达任意的高度，但是以后每一发炮弹都不能高于前一发的高度。
假设某天雷达捕捉到敌国的导弹来袭。由于该系统还在试用阶段，所以只有一套系统，因此有可能不能拦截所有的导弹。
输入n个导弹依次飞来的高度（给出的高度数据是不大于30000的正整数），计算如果要拦截所有导弹最少要配备多少套这种导弹拦截系统。
比如：有8颗导弹，飞来的高度分别为
389 207 175 300 299 170 158 165
那么需要2个系统来拦截，他们能够拦截的导弹最优解分别是： 系统1：拦截 389 207 175
170 158 系统2：拦截 300 299 165

输入
两行，第一行表示飞来导弹的数量n（n<=1000）

第二行表示n颗依次飞来的导弹高度

输出
要拦截所有导弹最小配备的系统数k

样例
输入
8
389  207  175  300  299  170  158  165
输出
2
来源
贪心

标签
贪心
*/
#include <bits/stdc++.h>
using namespace std;  // x:代表每个导弹的高度
// p:找到的能拦截导弹的系统的下标
// k:a数组中已经有的能够拦截导弹的系统数量
int a[1010], i, n, x, p, k, j;
int main() {
  cin >> n;
  for (i = 1; i <= n; i++) {
    cin >> x;
    p = -1;
    // 循环a数组，找到第一个能够拦截的系统
    for (j = 1; j <= k; j++) {
      if (a[j] >= x) {
        p = j;
        break;
      }
    }
    //如果没找到系统拦截
    if (p == -1) {
      k++;
      a[k] = x;  //设定系统能拦截的最高高度
      // cout << k << " "<< a[j] << endl;//第几个拦截器拦截了哪些导弹
    } else {
      //用第p个系统拦截，修改系统的最高高度
      a[p] = x;
      // cout << p << " "<< a[j] << endl;//第几个拦截器拦截了哪些导弹
    }
  }
  cout << k;
}