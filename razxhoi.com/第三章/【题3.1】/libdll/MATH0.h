#ifndef _MATH0_h_
#define _MATH0_h_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#include<string.h>

using namespace std;

class DLLIMPORT MATH
{
  public:
  	 string Add(string str1,string str2);//�߾��ȼ� 
  	 string Subtrack(string a,string b);//�߾��ȼ� 
  	 string Multiply(string a,string b);//�߾��ȳ� 
  	 string Division(string a,string b);//�߾��ȳ� 
  	 string Factorial(int n); //�߾��Ƚ׳� 
     string Convert10_2(int n);//ʮ����ת������ 
     string Convert10_N(int N,int d);//ʮ����תN���� 
     string ConvertN_10(string s,int n);//N����תʮ���ƣ�n��ʾ���� 
  private:	
};
#endif
