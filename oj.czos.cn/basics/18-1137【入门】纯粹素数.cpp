/*1137 - 【入门】纯粹素数
题目描述
纯粹素数是这样定义的：一个素数，去掉最高位，剩下的数仍为素数，
再去掉剩下的数的最高位，余下的数还是素数。
这样下去一直到最后剩下的个位数也还是素数。求出所有小于3000的四位的纯粹素数。

输入
无
输出
按从小到大的顺序输出若干个纯粹素数，每行一个。

来源
函数问题
标签
函数问题
*/
#include <bits/stdc++.h>
using namespace std;
//判断一个整数n是否是素数
//是素数,返回true, 不是返回false
bool sushu(int n) {
  bool r = true;  //建设n是素数
  //循环2 ~sqrt(n), 有因子就不是素数(注意如果n<=1也不是)
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      r = false;
      break;  //停止循环
    }
  }
  if (n <= 1) {  //判断特殊情况
    r = false;
  }
  return r;
}
int main() {
  // bool f;
  // for (int i = 1; i <= 100; i++) {
  //   //调用函数,判断素数
  //   f = sushu(i);
  //   if (f == true) {
  //     cout << i << endl;
  //   }
  // }

  //循环1000~3000判断纯粹素数
  for (int i = 1000; i <= 3000; i++) {
    //判断素数(可以在if判断中直接调用函数,然后判断调用的结果是否为真)
    // if (sushu(i) == true && sushu(i % 1000) == true && sushu(i % 100) == true &&
    //     sushu(i % 10) == true) {
      if (sushu(i) && sushu(i % 1000) && sushu(i % 100) &&
          sushu(i % 10) ) {
      cout << i << endl;
    }
  }

  return 0;
}
