/*1478 - �����š����ִ�������Сд��ĸ
��Ŀ����
����һ����Сд��ĸ��ɵ��ַ������ַ�����<=100����������ִ�������Сд��ĸ��
ע�⣺����ж��Сд��ĸ���ֵĴ���һ���࣬�����ASCII��ֵ�����Ǹ���ĸ��
����
һ���ַ���

���
���ִ�������Сд��ĸ
����
����
aaabbbbbbbbbcdxs
���
b
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int ch[26] = {0};
  int ma = 0;
  for (int i = 0; i < s.size(); i++) {
    ch[s[i]]++;
  }
  for (int i = 0; i < 26; i++) {
    if (ch[i] >= ch[ma]) ma = i;
  }
  char x = 'a' + ma;
  cout << x;
  return 0;
}
