/*1339 - ����ߡ����������ĺ�
��Ŀ����
�Ӽ��̶���һ�������ʽ�������������ĺͣ����Ҳ�÷�������Լ�ֵ������ʽ��

�磬�Ӽ��̶���1/12+5/12+1/3���������5/6��

��5.1.107��

����
������ͱ��ʽ�����ʽ�г��ֵ����ֶ�����������ֵ��1~100֮�䣩
���
�͵ķ�����ʽ������������ݱ�֤�������ķ��Ӻͷ�ĸ������1~1000�ķ�Χ�ڡ�

����
����
1/12+5/12+1/3
���
5/6
˵��
ע�⿼�Ƕ�������ĺ�Ϊ�����������:1/3+1/3+1/3=1

��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {  //շת��������Լ��
  if (a % b == 0) return b;
  return gcd(b, a % b);
}
// �����������ĺͣ����Ϊ����
string he(string s1, string s2) {
  // 1/12
  //   0123
  string r;
  int x1, y1, x2, y2, x, y;
  int p1 = (int)s1.find('/');
  int p2 = (int)s2.find('/');
  x1 = stoi(s1.substr(0, p1));
  y1 = stoi(s1.substr(p1 + 1, s1.size() - 1 - p1));
  x2 = stoi(s2.substr(0, p2));
  y2 = stoi(s2.substr(p2 + 1, s2.size() - 1 - p2));
  y = y1 * y2;
  x = x1 * y2 + x2 * y1;
  // �����Լ��
  int m = gcd(x, y);
  x = x / m;
  y = y / m;
  return to_string(x) + "/" + to_string(y);
}
string s, r, sum = "0/1";
int i;
int main() {
  //    cout<<he("1/12", "5/12");
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    if (s[i] != '+') {
      r += s[i];
      if (i == s.size() - 1 || s[i + 1] == '+') {
        //                cout<<r<<endl;
        sum = he(sum, r);
        r.clear();
      }
    }
  }
  //    cout<<sum<<endl;
  int sum_x, sum_y;
  int p = (int)sum.find('/');
  sum_x = stoi(sum.substr(0, p));
  sum_y = stoi(sum.substr(p + 1, sum.size() - 1 - p));
  if (sum_x == sum_y) {
    cout << 1 << endl;
  } else if (sum_x % sum_y == 0) {
    cout << sum_x / sum_y << endl;
  } else {
    cout << sum << endl;
  }
  return 0;
}