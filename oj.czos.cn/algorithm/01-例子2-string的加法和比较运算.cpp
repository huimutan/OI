#include <iostream>
using namespace std;
int main() {
  //在字符串s上,累加字符串
  string s;
  s = s + "hello";
  s = s + "student.";
  cout << s << endl;
  //在字符串s上,累加字符
  string s2;
  s2 = s2 + 'h';
  s2 = s2 + 'i';
  s2 = s2 + '2';
  cout << s2 << endl;
  //常见错误

  string s3;
  cout << s3.size() << endl;
  // s3是一个长度为0的字符串
  //不能访问下标0和下标1,数组下标越界了
  s3[0] = 'h';
  s3[1] = 'i';
  s3[2] = '3';
  cout << s3 << endl;

  string s4 = "ok4";
  s4[0] = 'h';
  s4[1] = 'i';
  s4[2] = '4';
  cout << s4 << endl;
}