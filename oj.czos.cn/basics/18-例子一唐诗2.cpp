#include <bits/stdc++.h>
using namespace std;
//有输入参数,没有返回值的函数
void tangshi(int n) {
  if (n == 1) {
    cout << "静夜思" << endl;
  } else if (n == 2) {
    cout << "悯农" << endl;
  } else if (n == 3) {
    cout << "春晓" << endl;
  } else {
    cout << "输入有误!" << endl;
  }
}
int main() {
  //调用有输入参数的函数 tangshi(l);
  int x = 2;
  //调用函数时,()中不能是变量的定义tangshi(int x)是错的
  tangshi(x);
  int y;
  cin >> y;
  tangshi(y);
}