/*1107 - 【基础】求英文句子中的最长单词
题目描述
一个英文句子（长度不超过255），只含有字母和空格，输出最长的一个单词。
如有多个长度相同的单词，则输出最前面的一个。

输入
一个字符串。

输出
一个字符串。

样例
输入
in which four coins
输出
which
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // w用来存放每个单词,s是英文句子字符串.
  char s[1000], w[100] = {'\0'}, max[100] = {'\0'};
  int k = 0;
  gets(s);
  for (int i = 0; i < strlen(s); i++) {
    //如果s[i]不是空格,那么就是单词的一部分,存到w中
    if (s[i] != ' ') {
      w[k] = s[i];
      k++;
      //如果当前单词结束了
      if (s[i + 1] == ' ' || s[i + 1] == '\0') {
        //存W的结束标记,输出W,清空W
        w[k] = '\0';
        //输出W
        // cout<<w<<endl;
        if (strlen(w) > strlen(max)) {
          strcpy(max, w);  //将 w 拷贝给 r
        }
        k = 0;
      }
    }
  }
  cout << max << endl;
  return 0;
}
