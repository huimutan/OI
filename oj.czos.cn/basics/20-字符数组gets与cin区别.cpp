#include <bits/stdc++.h>
using namespace std;
int main() {
  // cin֮���ַ�����Ĭ�ϲ���\0
  //�ص㣺�ԡ� ����Ϊ����
  // cin>>s;
  // gets()���Իس���Ϊ����
  char s[10];
  // cin >> s;
  gets(s);
  cout << s << " " << sizeof(s) << " " << strlen(s) << endl;
  for (int i = 0; s[i] != '\0'; i++) {
    cout << s[i] << endl;
  }
}