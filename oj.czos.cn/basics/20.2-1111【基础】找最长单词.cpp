/*1111 - ���������������
��Ŀ����
��д���򣬸��ݸ�����һ��������'.'���ַ��ִ����ҳ�������ĺ�����ĸ'a'���Ӵ���

����
һ�У�Ϊһ���ַ��ִ��������ھ��'.'���ִ��е��Ӵ���һ���򼸸��ո������

���
һ�С���ʾ�ҳ�����ĺ�����ĸ'a'���Ӵ�������ж���������Ӵ���ֻ��ʾ���еĵ�һ������û�к���ĸ'a'���Ӵ�������ʾ'NO'��

����
����
Her  name is Lilan   and she  is a  happy  student.
���
Lilan
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // s��Ӣ�ľ����ַ���,w������ʱ���ÿ������
  string s, w = "", max = "";
  bool isa = false;  //�Ƿ���a
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {  //ѭ��ÿ���ַ�
    //���s[i]���ǿո�,��ô���ǵ��ʵ�һ����,�浽w��
    if (s[i] != ' ' && s[i] != '.') {
      w += s[i];
      if (s[i] == 'a') isa = true;
    } else {
      if (w.size() > max.size() && isa) max = w;  //�������a�ĵ��ʳ��ȸ���
      w = "";  //��յ��ʣ�׼�������һ������
      isa = false;
    }
  }
  if (max == "")
    cout << "NO";
  else
    cout << max << endl;
  return 0;
}
