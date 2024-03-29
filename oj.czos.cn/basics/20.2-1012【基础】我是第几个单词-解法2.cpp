/*1012 - 【基础】我是第几个单词
题目描述
输入一个英文句子，例如：“This is a Book."，可以看到句子是以“.”来作为结束符号的，
并且单词之间以一个空格来分隔。接着再输入一个单词A，
请找出首次在句子中出现的与A相同的单词，是句子中的第几个单词，
若不存在，则输出该句子中单词字符的总个数。
例如对上句子而言，若输入单词“is”，则应输出：2 若输入单词“isa”，则应输出：11

输入
第一行为以‘.’结束的一个词组（仅由若干个单词组成，单词间由一空格隔开，
除单词和最后的“.”以外，不含其它字符）
第二行是一个单词（不含空格）

输出
一个整数

样例
输入
This is a Book.
Book
输出
4
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*1.分解并输出每个单词，并统计每个单词是第几个单词
This 1
is 2
a 3
Book 4
2.判断每个单词是否是要找的单词，如果是，输出单词是第几个单词
3.判断如果没有找到这个单词，输出字符总数量
*/
  string s, w, f;  // s代表英文句子，w代表每个单词，f代表要找的单词
  int c = 0, r = 0;  // c：统计第几个单词 r代表统计字符数量
  getline(cin, s);
  cin >> f;
  //遍历每个字符，分解单词
  //以.结束，  .可以不循环
  for (int i = 0; i < s.size() - 1; i++) {
    //如果是字母
    if (s[i] != ' ') {
      w += s[i];
      //如果单词结束
      if (s[i + 1] == ' ') {
        c++;
        r += w.size();  //字符数量
        // cout<<w<<" "<<c<<endl;//输出测试
        if (w == f) {
          cout << c;
          return 0;
        }
        //清空w,存储下一个单词(从下标为.的位置重新存起)
        w = "";
      }
    }
  }
  cout << r;
  return 0;
}
