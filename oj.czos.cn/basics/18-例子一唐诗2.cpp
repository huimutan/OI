#include <bits/stdc++.h>
using namespace std;
//���������,û�з���ֵ�ĺ���
void tangshi(int n) {
  if (n == 1) {
    cout << "��ҹ˼" << endl;
  } else if (n == 2) {
    cout << "��ũ" << endl;
  } else if (n == 3) {
    cout << "����" << endl;
  } else {
    cout << "��������!" << endl;
  }
}
int main() {
  //��������������ĺ��� tangshi(l);
  int x = 2;
  //���ú���ʱ,()�в����Ǳ����Ķ���tangshi(int x)�Ǵ��
  tangshi(x);
  int y;
  cin >> y;
  tangshi(y);
}