#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  // cin >> s;
  cout << s.size() << endl;

  getline(cin, s);
  cout << s << endl;

  cout << "------------" << endl;
  //�����ַ���ÿ���ַ�
  int i;  // i��Ϊstring���±�
  // s.size����:���ַ���s�ĳ���
  for (i = 0; i < s.size(); i++) {
    cout << s[i] << endl;
  }

  cout << "------------" << endl;
  string s2;
  s2 = "hello world!";
  cout << s2 << endl;
}