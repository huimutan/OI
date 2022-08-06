/*1591 - 【入门】求子串的位置
题目描述
请问在一个父字符串s中是否存在子字符串t。如果存在，则输出子字符串t在父字符串中所有的起始位置，如果不存在，则输出-1。
比如：假设父字符串s = "Go Abc good goole!"，子字符串t = "go"，那么输出位置：
8
13

再比如：假设父字符串s = "Go Abc good goole!"，子字符串t =
"hi"，那么输出结果：-1。

输入
第一行输入父字符串的值（字符串长度不超过100）；

第二行输入子字符串的值（子字符串长度不超过100）；

输出
输出子字符串在父字符串中所有的位置，如果父字符串中不存在子字符串，请输出-1。

样例
输入
Go Abc good goole!
go
输出
8
13
说明
请分别用find及substr两种方法求解；

来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //解法二：使用substr求解
  string s, t, x;  //截取出来的每个子字符串
  getline(cin, s);
  getline(cin, t);
  bool f = false;  //假设不存在
  /*    从每个字符开始截取t.size（）个子字符串出来
  判断截取出来的结果是否是要找的字符串t,如果是，输出i +1 */
  for (int i = 0; i < s.size(); i++) {
    x = s.substr(i, t.size());  // cout<<x<<endl;
    if (x == t) {
      cout << i + 1 << endl;
      f = true;
    }
  }
  if (f == false) {
    cout << -1;
  }
}