/*1547 - 【基础】小X转进制
题目描述
小X喜欢研究进制转换。

 在了解了进制转换的一般流程后，小X突然想起了以前学过的回文数（正着读倒着读都一样的数），
 于是开始思考一个奇怪的问题：1到N 中有多少个整数的平方在M进制下是回文数呢？
小X随手列了几个：
   2的平方4，10进制表示为4，是回文数；
   3的平方9，2进制表示为 1001，是回文数；
   9046的平方81830116，16进制表示为4E0A0E4，是回文数。
 小X觉得要全列出来太难了，希望你帮帮他。

输入
第一行包含用一个空格隔开的两个整数N,M。

输出
第一行包含一个整数，表示满足要求的整数个数。

样例
输入
2 10
输出
2
说明
数据范围
   对于30%的数据，M=10。
   对于另外30%的数据，M=2。
   对于 100%的数据，1≤N≤10000，2≤M≤16。


来源
常州市2015“信息与未来”夏令营选拔赛


来源
市赛 进制转换

标签
市赛进制转换
*/
#include <bits/stdc++.h>
using namespace std;
bool huiwen(string n) {//也可简化用reverse（n.begin(),n.end())作答
  bool r = true;  //假设是回文
  //判断回文：循环数组长度一半， 判断对称位置是否有不等
  for (int i = 0; i < n.size() / 2; i++) {
    if (n[i] != n[n.size() - i - 1]) {
      r = false;
      break;
    }
  }
  return r;
}

string shi2n(long long n, int jin) {  // 10进制转为其他进制数
  int x;
  string t = "0123456789ABCDEF", s = "";
  while (n != 0) {
    x = n % jin;
    s = t[x] + s;
    n /= jin;
  }
  return s;
}

int main() {
  int n, m, c = 0;
  string s;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    if (huiwen(shi2n(i*i, m)))
      // cout << shi2n(i, jin) << endl;
      c++;
  }
  cout << c;
  return 0;
}
