/*1369 - ����ߡ�Pell����
��Ŀ����
��һ�����У�����ǰ10���ֵ�ֱ�Ϊ��
1 2 5 12 29 70 169 408 985 2378��
������б���ΪPell���У����ʸ����еĵ�n���ֵ�Ƕ��٣���n<=1000��

����
һ������n��
���
��n���ֵ��

����
����
10
���
2378
��Դ
����

��ǩ
����
*/

#include <bits/stdc++.h>
using namespace std;
string he(string s1, string s2) {  //�������߾��ȵ������ĺ�
  string r;                        //����ܺ�
  int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
  //���������������
  int i;
  for (i = 0; i < s1.size(); i++) a[i] = s1[s1.size() - i - 1] - '0';
  for (i = 0; i < s2.size(); i++) b[i] = s2[s2.size() - i - 1] - '0';
  //��λ��ӣ���λ��λ
  int len = s1.size();
  if (s2.size() > s1.size()) len = s2.size();
  for (i = 0; i < len; i++) {  //����ǳ˷�����Ҫ����forѭ��
    c[i] += a[i] + b[i];
    if (c[i] >= 10) {
      c[i + 1] += c[i] / 10;
      c[i] %= 10;
    }
  }
  if (c[len]) len++;                //�ж��Ƿ���1λ
  for (i = len - 1; i >= 0; i--) {  //����c����ƴ�ӳ��ַ���
    r += c[i] + '0';
  }
  return r;
}

int main() {
  // a[n] = a[n-1]*2 + a[n-2]
  // z�����������,xy����z��ǰ����
  string x = "1", y = "2", z;
  int i, n;
  cin >> n;
  if (n == 1) {
    cout << x;
  } else if (n == 2) {
    cout << y;
  } else {
    for (i = 3; i <= n; i++) {  //�ӵ�3�ʼ����
      z = he(he(y, y), x);
      //�޸�xy��ֵ��������Ƶ�
      x = y;
      y = z;
    }
    cout << z;
  }
  return 0;
}