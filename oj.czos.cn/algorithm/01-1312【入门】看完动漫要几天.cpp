/*��Ŀ����
һ�������Ķ�������m���ӣ�m<=1000����Ϊ�˱������������������С��ͬѧÿ���xx:xx�ֿ���xx:xx�֣�����С��ͬѧ��Ҫ������ܿ����ⲿ�����Ķ�������4.1.15��

����
3�У���һ����һ������m���������ܷ��������ڶ��б�ʾÿ�쿴�����Ŀ�ʼʱ�䣬�����б�ʾÿ�쿴�����Ľ���ʱ�䡣��ȷ������Ŀ�ʼʱ��
< ����ʱ�䣩

���
һ������������С�����궯��������Ҫ������������

����
����
288
17:00
17:32
���
9
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int time2t(string time) {
  int x = time.find(':');
  string s1 = time.substr(0, x);
  string s2 = time.substr(x + 1, time.size());
  return stoi(s1) * 60 + stoi(s2);
}
int main() {
  int m;
  string t1, t2;
  cin >> m >> t1 >> t2;
  // cout << time2t(t1) << time2t(t2);
  cout << ceil(m * 1.0 / ((time2t(t2) - time2t(t1))));
  return 0;
}
