/*1379 - ����ߡ������ֽ�
��Ŀ����
�������ֳ���������ָ�� 1 ��������֮�⣬û������Լ���������������� 2��3��5��13
������������ 4��9��12��18 ���ǡ� ��Ȼ�������ֽܷ�ɳ� 1
��������֮�������ĳ˻�����ȴ���Էֽ�ɸ��������ĺ͡� ����Ҫ���
���һ������������ֽܷ�ɶ��ٸ�������ͬ�������ĺ͡� ���磬21 = 2 +
19��21�ĺϷ��ֽⷽ����21 = 2 + 3 + 5 + 11���Ƿֽ�Ϊ��������ķ�����
�ٱ��磺128�������Էֽ�Ϊ9�������ĺ͡�

����
n (10��n��200)��

���
n ����ֽܷ�ɶ��ٸ���ͬ�������ĺ͡�

����
����
21
���
4
˵��
����1:
21
����2:
128
�������
����1:
4
����2:
9

��Դ
2016����ʡ��������Ϣѧ����ƥ�˾�������

��Դ
���� ʡ��

��ǩ
����ʡ��
*/
#include <bits/stdc++.h>
using namespace std;
int num[50];
int n;
int indexx = 0;
int maxtotal = -1;
//�ж�����
bool sushu(int m) {
  bool r = true;
  for (int i = 2; i <= sqrt(m); i++) {
    if (m % i == 0) {
      r = false;
      break;
    }
  }
  if (m <= 1) {
    r = false;
  }
  return r;
}
// k Ϊ��ǰ�±꣬sumΪ�ܺͣ�total Ϊʹ�õ����ֵĸ���
void fun(int k, int sum, int total) {
  if (sum == n) {
    if (total > maxtotal)  //���� total
    {
      maxtotal = total;
    }
  } else if (sum < n && k < indexx)  //��� sum ���� n, �����±����������������
  {
    fun(k + 1, sum + num[k], total + 1);
    fun(k + 1, sum, total);
  }
}
int main() {
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (sushu(i))  //����������������� num����
    {
      num[indexx++] = i;
    }
  }
  fun(0, 0, 0);
  cout << maxtotal;
  return 0;
}