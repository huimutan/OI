#include <bits/stdc++.h>
using namespace std;
int main() {
  //形式一:定义字符数组未赋值(必须以字符\0结尾)
  char a[10];
  a[0] = 'h';
  a[1] = 'i';
  a[2] = '\0';
  cout << a << " " << sizeof(a) << " " << strlen(a) << endl;

  //形式二:定义数组的同时为数组元素赋值(注意:如果赋值元素个数不足数组长度,其余值默认是'\0')
  // sizeof():用来计算变量占用的字节数量(一个字符占1个字节)
  // strlen():计算字符串占用的实际字符的数量(\0之前有多少字符)
  char b[10] = {'h', 'i', '\0'};
  cout << b << " " << sizeof(b) << " " << strlen(b) << endl;

  //形式三:定义数组,长度由内容决定
  char c[] = {'h', 'i', '\0'};
  cout << c << " " << sizeof(c) << " " << strlen(c) << endl;

  //形式四:定义字符数组,直接赋值为字符串(默认补充\0)
  char d[] = "hi";
  cout << d << " " << sizeof(d) << " " << strlen(d) << endl;
  
  char e[10] = {'h', 'e', 'l', 'l', 'o', '\0', 'h', 'i'};
  // hello 10 5
  cout << e << " " << sizeof(e) << " " << strlen(e) << endl;
}