/*��Ŀ����
��һ������С��10λ�����ִ����2�Σ�ʹ���Ϊ��С��������
�������ִ���13304��
��ķ�����:
1 + 3304 = 3305
13 + 304 = 317
133 + 04 = 137
1330 + 4 = 1334
������ɿ�������Ϊ�������У�317 ��137����С����137

����
һ������С��10�����ִ�
���
��С�ĺ�Ϊ����������������������� -1

����
����
13304
���
137
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
//���庯�����ж�����
bool sushu(int n) {
  bool f = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0 || n <= 1) {
      f = false;
      break;
    }
  }
  return f;
}
int main() {
  string s, s1, s2;
  int x, y, mi = INT_MAX;
  cin >> s;
  //������s��ȡ��2�����ַ���,������п��ܵ���ͷ���
  for (int i = 0; i < s.size() - 1; i++) {
    s1 = s.substr(0, i + 1);
    s2 = s.substr(i + 1);
    // cout << s1 << " " << s2 << endl;
    x = stoi(s1);
    y = stoi(s2);
    // cout << x + y << " " << sushu(x + y) << endl;
    if (sushu(x + y) && x + y < mi) {
      mi = x + y;
    }
  }
  if (mi == INT_MAX) {
    cout << -1;
  } else {
    cout << mi;
  }
}