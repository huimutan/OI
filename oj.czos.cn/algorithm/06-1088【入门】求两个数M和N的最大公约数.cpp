/*1088 - �����š���������M��N�����Լ��
��Ŀ����
�������������� MM �� NN �����Լ��(MM��NN���ڳ����ͷ�Χ�ڣ���5.1.42��

����
����һ�У�����������������
���
���ֻ��һ�У�����1����������

����
����
45 60
���
15
��Դ
��Ҫ�ҹ��ɵ�ѭ��
��ǩ
��Ҫ�ҹ��ɵ�ѭ��
*/
#include <bits/stdc++.h>
using namespace std;
//�ݹ�:��շת��������ظ��õݹ����
long long fun(long long a, long long b) {
  //�ݹ�ֹͣ����:a%b==0
  if (a % b != 0) {
    return fun(b, a % b);
  } else {
    return b;
  }
}
int main() {
  long long a, b, t;
  cin >> a >> b;
  cout << fun(a, b);
}