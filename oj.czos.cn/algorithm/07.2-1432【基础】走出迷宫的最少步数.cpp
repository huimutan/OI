/*1432 - 【基础】走出迷宫的最少步数
题目描述
一个迷宫由R行C列格子组成，有的格子里有障碍物，不能走；有的格子是空地，可以走。
给定一个迷宫，求从左上角走到右下角最少需要走多少步(数据保证一定能走到)。只能在水平方向或垂直方向走，不能斜着走。

输入
第一行是两个整数，R和C，代表迷宫的行数和列数。（ 1<= R，C <= 40)
接下来是R行，每行C个字符，代表整个迷宫。空地格子用'.'表示，有障碍物的格子用'#'表示。迷宫左上角和右下角都是'.'。

输出
输出从左上角走到右下角至少要经过多少步（即至少要经过多少个空地格子）。计算步数要包括起点和终点。

样例
输入
5 5
..###
#....
#.#.#
#.#.#
#.#..
输出
9
来源
深搜 递归 广搜

标签
深搜递归广搜
*/
#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[50][50];  //地图
int d[50][50];   //存储走到每个点最少需要多少步
//方向值变化的数组
int fx[5] = {0, 0, 1, 0, -1};
int fy[5] = {0, 1, 0, -1, 0};
//递归探索地图， 求到走到每个点最少需要多少步
void dfs(int x, int y, int dep) {
  d[x][y] = dep;
  int tx, ty;
  //循环数组，得到 4 个新的方向， 递归探索 4 个方向
  for (int i = 1; i <= 4; i++) {
    tx = x + fx[i];
    ty = y + fy[i];
    //如果 tx,ty 可以探索(该点在地图内， 且该点是。，且走到该点的步数更少)
    if (a[tx][ty] == '.' && dep + 1 < d[tx][ty]) {
      dfs(tx, ty, dep + 1);
    }
  }
}
int main() {
  int i, j;
  cin >> n >> m;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      cin >> a[i][j];
      //将最少步数初始值设为 INT_MAX
      d[i][j] = INT_MAX;
    }
  }
  //调用函数
  dfs(1, 1, 1);
  cout << d[n][m];
}