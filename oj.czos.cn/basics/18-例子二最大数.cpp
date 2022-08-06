#include <bits/stdc++.h>
using namespace std;
//求2个整数的较大数
int max(int a, int b) {
  //由于函数有返回值,先定义变量,用来存储返回值
  int r;
  if (a > b) {
    r = a;
  } else {
    r = b;
  }
  //将返回值先定义并return掉,防止遗忘
  return r;
}
//求3个整数的最大数
int three(int a, int b, int c) {
  int r;
  r = max(a, b);
  r = max(r, c);
  return r;
}
int main() {
  //调用求2个整数较大数的函数
  //调用函数:需要什么给什么(类型和个数要匹配),返回什么拿什么
  ////由于max函数需要2个整数输入,因此,我们给两个整数作为输入
  ////由于max函数返回整数,因此我们定义整数类型的变量来接收 
  int x = max(2,8);
  cout << x << endl;
  int m = 100;
  int n = 200;
  //调用函数
  int y = max(m, n);
  cout << y << endl;
  //调用函数,其3个数的最大数
  int z = three(2, 9, 3);
  cout << z << endl;
}