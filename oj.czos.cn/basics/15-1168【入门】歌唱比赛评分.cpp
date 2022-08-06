/*1168 - 【入门】歌唱比赛评分
题目描述
四（1）班要举行一次歌唱比赛，以选拔更好的苗子参加校的歌唱比赛。
评分办法如下：设N个评委，打N个分数（0 <= 每个分数 <= 10），
去掉一个最高分，去掉一个最低分，剩下的评委的平均分即为该选手的最后得分。
但是选手太多了，靠人工计算每个选手的得分太慢太麻烦。
你能不能帮帮他们，设计一个程序让计算机来算出选手的最后得分呢？（4.1.53）

输入
第一行为一个整数N（ 5 <= N <= 10 ）
第二行为N个整数Ai（ 0 <= Ai <= 10 ）

输出
选手的最后得分（保留两位小数）

样例
输入
5
5 6 7 8 9
输出
7.00
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n], max = 0, min = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > a[max]) max = i;
    if (a[i] < a[min]) min = i;
    sum += a[i];
  }
  // cout << max << " " << min;
  cout << fixed << setprecision(2) << (sum - a[max] - a[min]) * 1.0 / (n - 2);
  return 0;
}
