/*1430 - 【基础】迷宫出口
题目描述
一天Extense在森林里探险的时候不小心走入了一个迷宫，迷宫可以看成是由n *
n的格点组成， 每个格点只有2种状态，0和1，前者表示可以通行后者表示不能通行。
同时当Extense处在某个格点时，他只能移动到东南西北(或者说上下左右)四个方向之一的相邻格点上，
Extense想要从点A走到点B，问在不走出迷宫的情况下能不能办到。如果起点或者终点有一个不能通行(为1)，则看成无法办到。

输入
第1行是一个正整数n (1 ≤ n ≤ 100)，表示迷宫的规模是n * n的。
接下来是一个n * n的矩阵，矩阵中的元素为0或者1。
再接下来一行是4个整数ha la hb lb，描述A处在第ha行 第la列，B处在第hb行 第lb列。

输出
能办到则输出“YES”，否则输出“NO”。

样例
输入
3
0 1 1
0 0 1
1 0 0
1 1 3 3
输出
YES
来源
深搜 递归 广搜

标签
深搜递归广搜
*/
#include <bits/stdc++.h>
using namespace std;
/*
1.判断如果起止点有1，就不能走；
2.从起点开始搜索，如果走到过终点，标记；
*/
int a[110][110];
int n;
int ha, la, hb, lb;

//搜索所有可行的点，走过标记
void dfs(int x, int y) {
  // cout<<x<<" "<<y<<endl;
  a[x][y] = 1;  //走过的点标记
  //判断是否到达终点
  if (x == hb && y == lb) {
    cout << "YES";
    exit(0);
  }

  //判断四个方向，是否有能走的点，如果有，直接递归执行
  if (y + 1 <= n && a[x][y + 1] == 0) dfs(x, y + 1);
  if (x + 1 <= n && a[x + 1][y] == 0) dfs(x + 1, y);
  if (y - 1 >= 1 && a[x][y - 1] == 0) dfs(x, y - 1);
  if (x - 1 >= 1 && a[x - 1][y] == 0) dfs(x - 1, y);
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  cin >> ha >> la >> hb >> lb;

  //如果起止点不能走，输出NO
  if (a[ha][la] == 1 || a[hb][lb] == 1) {
    cout << "NO";
    return 0;
  }

  dfs(ha, la);  //从ha,la开始搜索，走过的点标记为1
  cout << "NO";
  return 0;
}
