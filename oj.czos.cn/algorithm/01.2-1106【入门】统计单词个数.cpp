/*1106 - �����š�ͳ�Ƶ��ʸ���
��Ŀ����
����һ���ַ������ַ������ȡ�100�����������ɸ����ʣ�Լ�����ڵ����������ÿո������һ�������ո񣩣����ͳ�Ƶ��ʵĸ�����

����
һ�пո���������ɸ����ʡ�

���
���ʸ���

����
����
Hello   World
���
2
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
string s, w;
int c = 0;
int main() {
  getline(cin, s);
     s = " " + s;
  for (int i = 0; i < s.size(); i++) {
     if (isalpha(s[i]) && isblank(s[i - 1])) {
    //if (isalpha(s[i]) && (isblank(s[i + 1]) || i == s.size() - 1)) {
      c++;
    }
  }
  cout << c;
  return 0;
}
