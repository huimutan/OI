#include "picture.h" //�����ͼͷ�ļ�
#define T 1.3 //���峣��T��ֵΪ1.3 

int main()
{
  Sound(1,0,0.5*T);
  Sound(2,0,0.5*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(1,0,0.5*T);
  Sound(2,0,0.5*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(3,0,0.5*T);
  Sound(4,0,0.5*T);
  Sound(5,0,1.0*T);
  Sound(3,0,0.5*T);
  Sound(4,0,0.5*T);
  Sound(5,0,1.0*T);

  Sound(5,0,0.25*T);
  Sound(6,0,0.25*T);
  Sound(5,0,0.25*T);
  Sound(4,0,0.25*T);
  Sound(3,0,0.5*T);
  Sound(1,0,0.5*T);

  Sound(5,0,0.25*T);
  Sound(6,0,0.25*T);
  Sound(5,0,0.25*T);
  Sound(4,0,0.25*T);
  Sound(3,0,0.50*T);
  Sound(1,0,0.50*T);

  Sound(1,0,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(1,0,1.0*T);
  Sound(1,0,0.5*T);
  Sound(5,-1,0.5*T);
  Sound(1,0,1.0*T);

  Win.Show();//������ͼ����
}

