/*1104 - ���������ַ�����ѹ
��Ŀ����
����ѹ������ַ��������ѹ��ǰ���ַ�����ѹ���ķ����ǰ���������ͬ��ĸѹ��Ϊ"����+��ĸ"����ʽ���ڱ����У���������ĸ����Ҫѹ�������磺3a5bx����ѹ��Ľ��Ϊ��aaabbbbbx�����磺12ab10c2ax��ѹ��Ľ��Ϊ��aaaaaaaaaaaabccccccccccaax��

����
ѹ������ַ���
���
��ѹ����ַ���

����
����
3a5bx
���
aaabbbbbx
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, n = "";
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i]))
      n += s[i];
    else {
      if (n == "") n = "1";
      for (int j = 0; j < stoi(n); j++) cout << s[i];
      n = "";
    }
  }
  return 0;
}
