/*1368 - ����ߡ��۷�·��
��Ŀ����
һֻ�۷�����ͼ��ʾ�����ַ䷿������,��֪��ֻ�ܴӱ��С�ķ䷿������Ŵ�����ڷ䷿,
�������㣺�۷�ӷ䷿M��ʼ�����䷿NN��1 �� M < N �� 1001��M<N��100���ж���������·�ߣ�

����
����M��N��ֵ�� ��1 �� M < N �� 1001��M<N��100��
���
�����ж�����·�ߡ�

����
����
1 14
���
377
��Դ
����

��ǩ
����
*/
//�������֪����һ��쳲���������
#include<bits/stdc++.h>
using namespace std;
//��n-m��ֵ�ϴ�ʱ��Ҫ�߾������� 
string he(string s1,string s2){
 	string r;//����ܺ�
	int a[1000] = {0};
	int b[1000] = {0};
	int c[1000] = {0};
	
	//���������������
	int i;
	for(i = 0;i < s1.size();i++){
		a[i] = s1[s1.size() - i - 1] - '0';
	} 
	
	for(i = 0;i < s2.size();i++){
		b[i] = s2[s2.size() - i - 1] - '0';
	} 
	
	//��λ��ӣ���λ��λ
	int len = s1.size();
	if(s2.size() > s1.size()) len = s2.size();
	
	for(i = 0;i < len;i++){
		c[i] = c[i] + a[i] + b[i];
		if(c[i] >= 10){
			c[i+1] = c[i+1] + c[i] / 10;
			c[i] = c[i] % 10;
		}
	} 
	//�ж��Ƿ���1λ
	if(c[len] != 0) len++;

	//����c����ƴ�ӳ��ַ���
	for(i = len-1;i>=0;i--){
		//��c[i]+'0'���ascii��ǿ��ת��Ϊchar���� 
		r = r + (char)(c[i] + '0');
	} 

	return r; 
} 

int main(){
    int m,n,i,j;
    cin>>m>>n;
    i = n - m;
    string x,y,z;
    x = "1";
    y = "1";
    if(i==1){
    	cout<<x;
	}else if(i==2){
		cout<<y;
	}else{
		for(j=3;j<=i+1;j++){
			z = he(x,y);
			x = y;
			y = z;
		}
		cout<<z;
	}
    return 0;
}