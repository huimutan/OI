/*1142 - �����š�����������
��Ŀ����
���һ��������߶����ұ߶�����ͬһ�������ͳ�Ϊ��������
����686����һ���������������10��1000�����еļ��ǻ�����ͬʱ������������Ȼ����

����
��

���
���ɸ�����ÿ��һ��

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
//�жϻ���
bool huiwen(int n) {
  int fan = 0, x = n;  //�洢�෴��;����nʱ����ԭ��
  while (x > 0) {
    fan = fan * 10 + x % 10;
    x /= 10;
  }
  return n == fan;
}
int main() {
  for (int i = 10; i <= 1000; i++) {
    if (sushu(i) && huiwen(i)) cout << i << endl;
  }
  return 0;
}
