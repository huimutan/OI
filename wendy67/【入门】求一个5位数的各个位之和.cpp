/*G. �����š���һ��5λ���ĸ���λ֮��
��Ŀ����
�Ӽ��̶���һ��5λ������������������5λ���ĸ���λ֮�ͣ�

����
һ��5λ��������n

���
���5λ���ĸ���λ֮��

����
����
12345
���
15
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,sum=0;
  cin >> x;
  while (x> 0)
  {
   
    sum+=x % 10;
    x/= 10;
  }
  cout << sum;
  return 0;
}
