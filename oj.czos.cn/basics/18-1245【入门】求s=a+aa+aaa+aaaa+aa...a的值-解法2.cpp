/*1245 - �����š���s=a+aa+aaa+aaaa+aa...a��ֵ
��Ŀ����
��s=a+aa+aaa+aaaa+aa...a��ֵ������a�Ӽ��̶��롣
���磺����2����s=2+22=24���ٱ��磺����5��s=5+55+555+5555+55555=61725

����
һ������a��a��1~9�ķ�Χ�ڣ�
���
����n���������ʽ�Ľ��

����
����
2
���
24
��Դ
�������� �ݹ�

��ǩ
��������ݹ�
*/
#include <bits/stdc++.h>
using namespace std;
int f(int n) {
  int a = n;
  if (n == 1)
    return 1;
  else
    return pow(10, n - 1) + f(n - 1);
  // result = num * 1 + num * 11 + num * 111
}
int count(int c, int num) {  // c������ӵĴ���;num��Ҫ��ӵ�����
  if (c == 1) {
    return num;
  } else {
    return f(c) * num + count(c - 1, num);
  }
}
int main() {
  int n;
  cin >> n;
  cout << count(n, n);
  return 0;
}
