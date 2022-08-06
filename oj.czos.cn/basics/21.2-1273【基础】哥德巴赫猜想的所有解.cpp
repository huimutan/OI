/*1273 - 【基础】哥德巴赫猜想的所有解
题目描述
求出哥德巴赫猜想的所有解（将一个大于9的奇数拆分成三个素数之和），并按从小到大的顺序写出。

输入
一行，一个大于9的奇数。

输出
第一行，一个整数N，表示解的总数。 第2-N+1行，每行一个解。

样例
输入
15
输出
3
15=2+2+11
15=3+5+7
15=5+5+5
来源
二维数组

标签
二维数组
*/
#include <bits/stdc++.h>
using namespace std;
bool sushu(int n) {
  bool r = true;  //假设n是素数
  //循环2 ~sqrt(n), 有因子就不是素数(注意如果n<=1也不是)
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0 || n <= 1) {
      r = false;
      return r;  //停止循环
    }
  }
  return r;
}
int main() {
  int n;
  cin >> n;
  int a[10000][3], m = 0;
  for (int i = 2; i <= n / 3; i++) {
    for (int j = i; j <= (n - i) / 2; j++) {
      for (int k = j; k <= n - i - j; k++) {
        if (sushu(i) && sushu(j) && sushu(k) && n == i + j + k) {
          a[m][0] = i;
          a[m][1] = j;
          a[m][2] = k;
          m++;
        }
      }
    }
  }
  cout << m << endl;
  for (int i = 0; i < m; i++) {
    cout << n << "=" << a[i][0] << "+" << a[i][1] << "+" << a[i][2] << endl;
  }
  return 0;
}
