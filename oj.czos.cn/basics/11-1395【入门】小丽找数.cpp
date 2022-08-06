/* 【入门】小丽找数？
题目描述
小丽同学想在1~n中找出这样的数，这个数的各个位的和不能被2整除也不能被5整除，
比如3、12、25、30、100。这些数都满足各个位的和不能被2和5整除。
请你编程找出1~n中这些数有多少个？

输入
一个整数n（n<=9999）
输出
1~n中满足条件的数的个数

样例
输入复制
50
输出复制
20 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, c = 0;  // c：满足条件数的个数
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int sum = 0;  // sum：各个位的和
    /*int j = i;
        while (j > 0){
        sum += j % 10;
            j /= 10;
    }*/
    for (int j = i; j > 0; j /= 10) {
      sum += j % 10;
    }
    if (sum % 2 != 0 && sum % 5 != 0) {  //不能被2整除也不能被5整除
      c++;
    }
  }
  cout << c;
  return 0;
}