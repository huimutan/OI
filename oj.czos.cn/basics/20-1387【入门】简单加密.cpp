/*1387 - �����š��򵥼���
��Ŀ����
Julius
Caesar����ʹ�ù�һ�ֺܼ򵥵����롣���������е�ÿ���ַ�������������ĸ���к�5λ��Ӧ���ַ������棬�����͵õ������ġ�
�����ַ�A��F�����档���������ĺ��������ַ��Ķ�Ӧ��ϵ��
���ģ�A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
���ģ�V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
��������ǶԸ��������Ľ��н��ܵõ����ġ�
����Ҫע����ǣ������г��ֵ���ĸ���Ǵ�д��ĸ��������Ҳ��������ĸ���ַ�������Щ�ַ����ý��н��롣

����
һ�У��������ģ����Ĳ�Ϊ�գ��������е��ַ���������200��

���
���һ�У������Ķ�Ӧ�����ġ�

����
����
NS BFW, JAJSYX TK NRUTWYFSHJ FWJ YMJ WJXZQY TK YWNANFQ HFZXJX
���
IN WAR, EVENTS OF IMPORTANCE ARE THE RESULT OF TRIVIAL CAUSES
��Դ
�ַ���

��ǩ
�ַ���
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  char s[300];
  gets(s);
  for (int i = 0; s[i]; i++) {
    // cout << s[i] << endl;
    if (s[i] >= 'F' && s[i] <= 'Z') {
      s[i] -= 5;
    } else if (s[i] >= 'A' && s[i] <= 'E') {
      s[i] += 21;
    }
  }
  cout << s;
  return 0;
}
