/*E. �����š�������Ƕ���
��Ŀ����
����һ����λ��������Ȼ������������������ӣ�����͡�
�磺����167�����Ϊ167+761=928

����
ֻ��һ�У�һ����λ��������

���
һ��������

����
����
167
���
928
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  int bai = x / 100;
  int shi = x / 10 % 10;
  int ge = x % 10;
  cout << bai * 100 + bai + shi * 10 * 2 + ge * 100 + ge;
  return 0;
}
