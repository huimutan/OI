/*1258 - �����š���һ����λ��
��Ŀ����
������һ����λ��������λ��������ÿλ���ֵĽ׳�֮�͡�
�� abc = a! + b! + c! (n!��ʾn�Ľ׳�,n! = 1*2*3*...*n���磺5! =1*2*3*4*5)

����
��

���
��������

��Դ
��ѭ��

��ǩ
��ѭ��
*/
#include <bits/stdc++.h>
using namespace std;
//��n�Ľ׳�
int jiecheng(int n) {
  int r = 1;
  for (int i = 1; i <= n; i++) {
    r = r * i;
  }
  return r;
}
int main() {
  /*
  ˼·:
  ��һ��:���庯��,��һ������n�Ľ׳�
  �ڶ���:ѭ�����е���λ��,�ж���Щ����������
  */
  int i, b, s, g;
  int x, y, z;  //���ÿ�����Ľ׳�
  for (i = 100; i <= 999; i++) {
    b = i / 100;
    s = i / 10 % 10;
    g = i % 10;
    //��׳�
    x = jiecheng(b);
    y = jiecheng(s);
    z = jiecheng(g);
    if (i == x + y + z) {
      cout << i << endl;
    }
  }
  //���ú�����׳˵Ĺ��̿��������¼� :
  // for (int i = 100; i <= 999; i++) {
  //   if (i == jiecheng(i / 100) + jiecheng(i / 10 % 10) + jiecheng(i % 10))
  //     cout << i << endl;
  // }
}
