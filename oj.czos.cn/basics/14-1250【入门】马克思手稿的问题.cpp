/*1250 - 【入门】马克思手稿的问题
题目描述
马克思手稿中有一道趣味数学题：有30个人，其中可能有男人、女人和小孩，
在一家饭馆里吃饭共花了50先令，假设每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，
问男人、女人和小孩各有几人？（注意：不一定男人、女人、小孩都有）

输入
无
输出
每行3个数，按照男人、女人、小孩的顺序，由小到大依次输出所有可能的人数方案（男人、女人、小孩其中某些人的数量可以为0）

来源
需要找规律的循环
标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int i, j, k;  // i,j,k：男人女人小孩
  int n = 30;
  for (int i = 0; i <= n; i++) {    //男人可能的人数
    for (int j = 0; j <= n; j++) {  //女人可能的人数
      k = n - i - j;                //小孩的人数
      if (i * 3 + j * 2 + k == 50) {
        cout << i << " " << j << " " << k << endl;
      }
    }
  }

  return 0;
}
