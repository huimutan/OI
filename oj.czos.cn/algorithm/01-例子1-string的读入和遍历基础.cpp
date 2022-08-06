#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  // cin >> s;
  cout << s.size() << endl;

  getline(cin, s);
  cout << s << endl;

  cout << "------------" << endl;
  //遍历字符串每个字符
  int i;  // i作为string的下标
  // s.size（）:求字符串s的长度
  for (i = 0; i < s.size(); i++) {
    cout << s[i] << endl;
  }

  cout << "------------" << endl;
  string s2;
  s2 = "hello world!";
  cout << s2 << endl;
}