/*�ⷨ���� ���ַ����洢ʮ�����ƶ�Ӧ���ַ�����16 ����תΪ�ַ��Ĺ���
ע�⣺
int����ﵽ2^31-1, 10 λ������
long long ����ﵽ 2^63-1, 19 λ������*/
#include <bits/stdc++.h>
using namespace std;
long long n, x;  // n��һ��������18λ��������
string s;
string t = "0123456789ABCDEF";
int main() {
  cin >> n;
  while (n != 0) {
    x = n % 16;
    // cout<<x<<endl;
    //��xת��Ϊ�ַ���������ַ����ַ���s
    // x:0~9-> '0'~'9'
    // x:10~15 -> 'A'~'F'
    //�� n%16 ת��Ϊ�ַ��������s
    s = t[x] + s;
    n = n / 16;
  }
  if (s == "") {
    cout << 0;
  } else {
    cout << s;
  }
}
