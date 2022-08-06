/*1139 - 【入门】孪生素数
题目描述
我们定义，如果a和a+2都是素数（如5和7），那么我们就称a和a+2是一对孪生素数。
请写一个程序找出2-N之间的所有孪生素数。

输入
一个整数N（ 2 < N < 1000 ）。
输出
若干行，每行两个整数，即一对孪生素数。

样例
输入
10
输出
3 5
5 7
来源
函数问题

标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
//判断素数
bool sushu(int n) {
  bool r = true;                        //假设是素数
  for (int i = 2; i <= sqrt(n); i++) {  //循环因子范围,找到因子就不是素数
    if (n <= 1 || n % i == 0) {  //注意判断特殊情况
      r = false;
      break;
    }
  }
  return r;
}
int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n - 2; i++) {
    if (sushu(i) && sushu(i + 2)) {
      cout << i << " " << i + 2 << endl;
    }
  }

  return 0;
}
