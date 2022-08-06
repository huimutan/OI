#include <bits/stdc++.h>
using namespace std;
int main() {
  // cin之后，字符数组默认补充\0
  //特点：以’ ’作为结束
  // cin>>s;
  // gets()：以回车作为结束
  char s[10];
  // cin >> s;
  gets(s);
  cout << s << " " << sizeof(s) << " " << strlen(s) << endl;
  for (int i = 0; s[i] != '\0'; i++) {
    cout << s[i] << endl;
  }
}