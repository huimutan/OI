/*1082 - 【入门】猴子吃桃子
题目描述
猴子吃桃子问题：猴子第一天摘下若干个桃子，当即吃了一半还不过瘾，又多吃了一个；
第二天又将剩下的桃子吃掉一半又多吃了一个；
以后每天早上都吃了前一天剩下的一半零一个。
到了第十天想再吃时，见只剩下一个桃子，求第一天共摘了多少个桃子？

输入
无

输出
一个整数，第一天共有多少个桃子

来源
需要找规律的循环

标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, i;
  x = 1;  //第 10 天
  //逆推
  for (i = 2; i <= 10; i++) {
    x = (x + 1) * 2;
  }
  cout << x;
}
