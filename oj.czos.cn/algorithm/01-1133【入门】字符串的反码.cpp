/*【入门】字符串的反码
题目描述
一个二进制数，将其每一位取反，称之为这个数的反码。下面我们定义一个字符的反码。如果这是一个小写字符，则它和字符'a’的距离与它的反码和字符'z’的距离相同；如果是一个大写字符，则它和字符'A’的距离与它的反码和字符'Z’的距离相同；如果不是上面两种情况，它的反码就是它自身。
举几个例子，'a’的反码是'z’；'c’的反码是'x’；'W’的反码是'D’；'1’的反码还是'1’；''的反码还是'
′
 的反码还是
′
 '。
一个字符串的反码定义为其所有字符的反码。我们的任务就是计算出给定字符串的反码。

输入
一个长度不超过80个字符的字符串。（字符串不含空格）

输出
字符串的反码。

样例
输入
Hello
输出
Svool
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    //对字母求反码
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = 'Z' - s[i] + 'A';
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = 'z' - s[i] + 'a';
    }
  }
  cout << s;
  return 0;
}