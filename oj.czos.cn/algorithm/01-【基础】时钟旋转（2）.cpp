/*1321 - ��������ʱ����ת��2��
��Ŀ����
ʱ�Ӵ�ʱ�䣺xx:xx��xxʱxx�֣����ߵ�ʱ�䣺xx:xx��xxʱxx�֣���ʱ�빲��ת�˶��ٶȣ��������һ��ʱ��<=�ڶ���ʱ�䣬2��ʱ�䶼��12Сʱ�ƣ�������ʱ���ʱ������12Сʱ��Ҳ����˵ʱ����ת�Ķ�����360��֮�ڣ�Ҳ����
1 <= ʱ��1 <= ʱ��2 <= 12��4.2.4��

����
2�У���һ��Ϊ��ʼʱ�䣨�磺01:00�����ڶ���Ϊ����ʱ�䣨�磺01:05��

���
ʱ����ת�Ķ������������1λС����

����
����
01:00
01:05
���
2.5
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
double time2t(string time) {
  int x = time.find(':');
  string s1 = time.substr(0, x);
  string s2 = time.substr(x + 1, time.size());
  return stoi(s1) + stoi(s2) * 1.0 / 60;
}
int main() {
  string t1, t2;
  cin >> t1 >> t2;
  // cout << time2t(t1) << time2t(t2);
  cout << fixed << setprecision(1) << (time2t(t2) - time2t(t1)) * 30;
  return 0;
}
