/*1379 - 【提高】素数分解
题目描述
素数，又称质数，是指除 1 和其自身之外，没有其他约数的正整数。例如 2、3、5、13
都是素数，而 4、9、12、18 则不是。 虽然素数不能分解成除 1
和其自身之外整数的乘积，但却可以分解成更多素数的和。 你需要编程
求出一个正整数最多能分解成多少个互不相同的素数的和。 例如，21 = 2 +
19是21的合法分解方法。21 = 2 + 3 + 5 + 11则是分解为最多素数的方法。
再比如：128，最多可以分解为9个素数的和。

输入
n (10≤n≤200)。

输出
n 最多能分解成多少个不同的素数的和。

样例
输入
21
输出
4
说明
样例1:
21
样例2:
128
样例输出
样例1:
4
样例2:
9

来源
2016江苏省青少年信息学奥林匹克竞赛复赛

来源
回溯 省赛

标签
回溯省赛
*/
#include <bits/stdc++.h>
using namespace std;
int num[50];
int n;
int indexx = 0;
int maxtotal = -1;
//判断素数
bool sushu(int m) {
  bool r = true;
  for (int i = 2; i <= sqrt(m); i++) {
    if (m % i == 0) {
      r = false;
      break;
    }
  }
  if (m <= 1) {
    r = false;
  }
  return r;
}
// k 为当前下标，sum为总和，total 为使用的数字的个数
void fun(int k, int sum, int total) {
  if (sum == n) {
    if (total > maxtotal)  //更新 total
    {
      maxtotal = total;
    }
  } else if (sum < n && k < indexx)  //如果 sum 超过 n, 或者下标大于素数个数结束
  {
    fun(k + 1, sum + num[k], total + 1);
    fun(k + 1, sum, total);
  }
}
int main() {
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (sushu(i))  //如果是素数，将其存进 num数组
    {
      num[indexx++] = i;
    }
  }
  fun(0, 0, 0);
  cout << maxtotal;
  return 0;
}