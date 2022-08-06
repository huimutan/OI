/*1116 - 【入门】调换位置
题目描述
将用逗号隔开的两个英语单词交换位置输出。

输入
一行以逗号隔开的两个英文单词。（字符串长度不超过100）

输出
将两个单词交换后输出的结果

样例
输入
abc,de
输出
de,abc
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char s[1000], r[1000];
  int p;      // p:代表逗号府下标(position)
  int k = 0;  // k:代表r数组的下标
  gets(s);
  //求出逗号的下标
  for (int i = 0; i < strlen(s); i++) {  //如果是逗号
    if (s[i] == ',') {
      p = i;
      break;
    }
  }
  //将逗号后面的内容拷贝到结果字符串r
  for (int i = p + 1; i < strlen(s); i++, k++) {
    r[k] = s[i];
    // k++;
  }
  //存储逗号
  r[k] = ',';
  k++;
  //将逗号前面的内容拷贝到结果字符串r
  for (int i = 0; i <= p - 1; i++, k++) {
    r[k] = s[i];
    // k++;
  }
  //在r数组中存储结束标记
  r[k] = '\0';
  cout << r << endl;
}
