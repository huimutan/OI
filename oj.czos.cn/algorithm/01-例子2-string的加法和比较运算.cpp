#include <iostream>
using namespace std;
int main() {
  //���ַ���s��,�ۼ��ַ���
  string s;
  s = s + "hello";
  s = s + "student.";
  cout << s << endl;
  //���ַ���s��,�ۼ��ַ�
  string s2;
  s2 = s2 + 'h';
  s2 = s2 + 'i';
  s2 = s2 + '2';
  cout << s2 << endl;
  //��������

  string s3;
  cout << s3.size() << endl;
  // s3��һ������Ϊ0���ַ���
  //���ܷ����±�0���±�1,�����±�Խ����
  s3[0] = 'h';
  s3[1] = 'i';
  s3[2] = '3';
  cout << s3 << endl;

  string s4 = "ok4";
  s4[0] = 'h';
  s4[1] = 'i';
  s4[2] = '4';
  cout << s4 << endl;
}