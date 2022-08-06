/*1134 - 【基础】国王的魔镜
题目描述
国王有一个魔镜，可以把任何接触镜面的东西变成原来的两倍——只是，因为是镜子嘛，增加的那部分是反的。
比如一条项链，我们用AB来表示，不同的字母表示不同颜色的珍珠。如果把B端接触镜面的话，魔镜会把这条项链变为ABBA。如果再用一端接触的话，则会变成ABBAABBA（假定国王只用项链的某一端接触魔镜）。
给定最终的项链，请编写程序输出国王没使用魔镜之前，最初的项链可能的最小长度。

输入
只有一个字符串（长度≤100），由大写英文字母组成，表示最终的项链。

输出
只有一个整数，表示国王没使用魔镜前，最初的项链可能的最小长度。

样例
输入
ABBAABBA
输出
2
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
//定义函数,判断-个字符串是否是回文
bool huiwen(char s[]) {
  bool r = true;  //假设是回文
  int i;
  //循环字符串长度的一半,如果对称位置有一个元素不等,就不是回文
  for (i = 0; i < strlen(s) / 2; i++) {
    if (s[i] != s[strlen(s) - i - 1]) {
      r = false;
      break;
    }
  }
  return r;
}
int main() {
  char s[1000];
  gets(s);
  // if(huiwen(s) == true){
  //	cout<<"yes,,<<endl;
  // }else{
  //	cout<<"no,,<<endl;
  // }
  //当s是可能接触过镜面的字符串时就循环
  //回文且长度为偶数
  while (huiwen(s) == true && strlen(s) % 2 == 0) {
    s[strlen(s) / 2] = '\0';
  }
  cout << strlen(s) << endl;
  return 0;
}
