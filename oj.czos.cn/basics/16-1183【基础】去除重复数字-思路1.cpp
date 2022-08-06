/*1183 - 【基础】去除重复数字
题目描述
给你N个数（n≤100）,每个数都在（0~1000）之间，其中由很多重复的数字，请将重复的数字只保留一个，并将剩下的数由小到大排序并输出。

输入
输入有2行，
第1行为1个正整数，表示数的个数:N
第2行有N个用空格隔开的整数。

输出
第1行为1个正整数M，表示不相同数的个数。
接下来的M行，每行一个整数，表示从小到大排好序的不相同的数。

样例
输入
10
20 40 32 67 40 20 89 300 400 15
输出
8
15
20
32
40
67
89
300
400
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  思路：去除重复的元素，对剩余的元素进行排序
  去除重复方法一：读入每个元素都判断一下数组中是否存在该元素
  如果存在就不存入数组，如果不存在再存储
  */
  int i, n, a[110], x, j, t;
  bool f;     //用来标记读入的元素是否出现过
  int k = 0;  //表示目前数组中实际不重复的元素个数
  cin >> n;
  // i代表将要读入n个数，相当于是一个计数器
  for (i = 0; i < n; i++) {
    cin >> x;
    //判断×在a数组中是否存在(a数组有k个元素)
    f = false;  //假设a数组中没有元素x
    //循环a数组的k个元素
    for (j = 0; j < k; j++) {
      if (a[j] == x) {
        f = true;
        break;  //停止当前循环
      }
    }
    //如果数组a中没有元素x,则将x存入数组
    if (f == false) {
      a[k] = x;
      k++;
    }
  }
  //排序
  for (i = 1; i < k; i++) {
    for (j = 0; j <= k - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
  //输出
  cout << k << endl;
  for (i = 0; i < k; i++) {
    cout << a[i] << endl;
  }
}