/*�����š�ɳ©
��Ŀ����
����ʦ����ڱ�һ������ϵͳ�����ñൽ���ķ�æ״̬����Ҫһ��ɳ©���ţ����ô�Ҷ���ѧC++�����������ǰ�����ʦ��һ�������ӡһ��ɳ©���š�

����
һ������n�����ŵ���������֤n�Ǵ���1��������

���
ɳ©���ţ�ʹ�á�*����ӡ

����
����
5
���
*****
 ***
  *
 ***
*****
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  n /= 2;
  for (int i = 0; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * (n - i) + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
