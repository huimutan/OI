#include "picture.h" //�����ͼͷ�ļ� 

int main()
{
  //���ӵ�����Ҳ����д���������ļ��Ȼ����������ļ��ŵ�ϵͳ�ļ�����
  Speech.Add("��Ҫд��","winword.exe");
  Speech.Add("��Ҫ���õ�Ƭ","powerpnt.exe");
  Speech.Do();//ִ�������
  Win.Show();//������ͼ����
}

