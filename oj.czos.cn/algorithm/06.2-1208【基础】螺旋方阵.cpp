/*1208 - ����������������
��Ŀ����
��������

����
һ������n(�����10)

���
һ��n�з���ÿ��n������ÿ��������Ϊ3

����
����
5
���
  1  2  3  4  5
 16 17 18 19  6
 15 24 25 20  7
 14 23 22 21  8
 13 12 11 10  9
��Դ
��ά����

��ǩ
��ά����
*/
#include <bits/stdc++.h>
using namespace std;
int a[20][20], n;
//Ϊ��ά����ĵ�xȦ��ֵ
// start: ��ʼ�������
// len:��ֵ�Ŀ��
// x:��ʼֵ
void fun(int start, int len, int x) {
  //�ݹ����
  if (len > 0) {
    int i, j;
    //ѭ����1�е��У����ң�
    for (j = start; j <= start + len - 1; j++) {
      a[start][j] = x;
      x++;
    }
    //ѭ�����£����һ�У�ѭ����
    for (i = start + 1; i <= start + len - 1; i++) {
      a[i][start + len - 1] = x;
      x++;
    }
    //ѭ���������һ�У�ѭ����
    for (j = start + len - 2; j >= start; j--) {
      a[start + len - 1][j] = x;
      x++;
    }
    //ѭ�����ϣ��� 1 �У�ѭ����
    for (i = start + len - 2; i >= start + 1; i--) {
      a[i][start] = x;
      x++;
    }
    //�ݹ�Ϊ start+1 ��һȦ��ֵ
    fun(start + 1, len - 2, x);
  }
}

int main() {
  cin >> n;
  //Ϊ��1,1�㿪ʼ��һȦ��ֵ�� ��ʼֵ��1
  fun(1, n, 1);
  //���
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }
}