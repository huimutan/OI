/*1288 - �����š�������nת��Ϊ8����
��Ŀ����
�뽫һ������n��n<=10^12��������ת��Ϊ8���ƣ�

����
����n

���
n��8���ƶ�Ӧ����

����
����
100000
���
303240
��Դ
����ת��

��ǩ
����ת��
*/
#include <bits/stdc++.h>
using namespace std;
long long n, x;  //��n<=10^12��
string s;
string t = "01234567";
int main() {
  cin >> n;
  while (n != 0) {
    x = n % 8;
    s = t[x] + s;
    n = n / 8;
  }
  cout << s;
}
