/*1359 - ���������˽���ת��������
��Ŀ����
�뽫һ��100λ���ڵ�8��������ת��Ϊ2����������

����
100λ���ڵ�8��������
���
������Ӧ��2��������

����
����
12376532347173217361
���
1010011111110101011010011100111001111011010001111011110001
��Դ
����ת��

��ǩ
����ת��
*/
#include <bits/stdc++.h>
using namespace std;

long long n2shi(string s, int jin) {  //����������תΪ10����
  long long r = 0, t = 1;             // t:��ʾȨ��
  for (int i = s.size() - 1; i >= 0; i--) {
    r += (s[i] - '0') * t;
    t *= jin;
  }
  return r;
}

string shi2n(long long n, int jin) {  // 10����תΪ����������
  string t = "0123456789ABCDEF", r = "";
  if (n == 0)
    r = '0';
  else {
    while (n != 0) {
      r = t[n % jin] + r;
      n /= jin;
    }
  }
  return r;
}

int main() {
  string s;
  cin >> s;
  cout << shi2n(n2shi(s, 8), 2);
}
