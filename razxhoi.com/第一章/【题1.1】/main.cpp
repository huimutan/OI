#include "picture.h" //�����ͼͷ�ļ� 

int main()
{
  Win.Name("�����ҵĵ�һ������");
  Pen.Show(0);
  Win.Info(0);
  Win.Set3D(1);
  Win.Size(500,500);
  Win.Place(10,10);
// Win.FullScreen();//�˴�����������Size���Ӧͬʱ��
  Model.Heart(40,30);
  Win.Show();//������ͼ����
}
