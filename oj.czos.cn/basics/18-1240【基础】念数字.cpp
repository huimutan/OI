/*1240 - ��������������
��Ŀ����
��һ���������֡��ĳ��򡣵�������һ��0-99֮�������
������ͻ��ú���ƴ�����������ġ������

���磺35�������Ӧ���ǣ�san shi wu��
16�����Ӧ����shi liu��0�����Ӧ����ling��

����
һ�У�һ��������
���
һ�У�����������

����
����
35
���
san shi wu
��Դ
��������

��ǩ
��������
*/
#include <bits/stdc++.h>
using namespace std;
void nianshuzi(int n) {
  string shuzi[10] = {"ling", "yi",  "er", "san", "si",
                      "wu",   "liu", "qi", "ba",  "jiu"};
  // string b[10] = {"ge",     "shi",    "bai",     "qian",   "wan",
  //                 "shiwan", "baiwan", "qianwan", "baiwan", "yi"};
  cout << shuzi[n];
}
int main() {
  int n;
  cin >> n;
  if (n < 10)
    nianshuzi(n);  //һλ����ֱ�Ӷ�
  else {
    //��λ�����жϸ�λ��ʮλ
    int s = n / 10;
    int g = n % 10;
    if (s != 1) {  //ʮλ��Ϊ1��Ҫ������
      nianshuzi(s);
      cout << " ";
    }
    cout << "shi ";  // shi�ض�
    // ��λ��Ϊ0��Ҫ������
    if (g != 0) nianshuzi(g);
  }
  return 0;
}
