/*1151 - �����š�ͩͩ��
��Ŀ����
ͩͩ��ϲ���о����֣��ر�ϲ���о�������
һ�죬ͩͩ������һЩ���ֿ��Ա�ʾ������������˵���ʽ��
���磬10=2*5��2��5��������������10��һ����ͩͩ������
����ͩͩ���������㣬��������һ����n�������ж�n�ǲ��ǡ�ͩͩ������

����
һ����n(1<=n<=2^31-1)��

���
���һ�У����n��һ����ͩͩ�������������It's a Tongtong number.�������������It's
not a Tongtong number.��

����
����
10
���
It's a Tongtong number.
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
//�ж�����
bool sushu(int n) {
  bool r = true;                        //����������
  for (int i = 2; i <= sqrt(n); i++) {  //ѭ�����ӷ�Χ,�ҵ����ӾͲ�������
    if (n <= 1 || n % i == 0) {  //ע���ж��������
      r = false;
      break;
    }
  }
  return r;
}

int main() {
  int n;
  cin >> n;
  bool f = false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (sushu(i) && n % i == 0 && sushu(n / i)) {
      f = true;
      break;
    }
  }
  if (f)
    cout << "It's a Tongtong number.";
  else
    cout << "It's not a Tongtong number.";
  return 0;
}
