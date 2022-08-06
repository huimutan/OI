/*1175 - 【入门】语文成绩
题目描述
给出N(5 <= N
<=150)个人的语文成绩，求N个人的语文总分和平均分，并按成绩高低排序后输出。

输入
第1行：一个整数N。 第2行：空格隔开的N个整数，表示N个人的语文成绩。
输出
三行。

第1行：一个整数，为N个人的总分。
第2行：N个人的语文平均分，保留两位小数。
第3行：N个空格隔开的整数，为从高到低输出的N个人的成绩。

样例
输入
5
72 98 95 81 86
输出
432
86.40
98 95 86 81 72
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n], sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] < a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
  cout << sum << endl;
  cout << fixed << setprecision(2) << sum * 1.0 / n << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
