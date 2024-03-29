/*1368 - 【提高】蜜蜂路线
题目描述
一只蜜蜂在下图所示的数字蜂房上爬动,已知它只能从标号小的蜂房爬到标号大的相邻蜂房,
现在问你：蜜蜂从蜂房M开始爬到蜂房NN，1 ≤ M < N ≤ 1001≤M<N≤100，有多少种爬行路线？

输入
输入M，N的值。 （1 ≤ M < N ≤ 1001≤M<N≤100）
输出
爬行有多少种路线。

样例
输入
1 14
输出
377
来源
递推

标签
递推
*/
//由题面可知这是一道斐波那契数列
#include<bits/stdc++.h>
using namespace std;
//当n-m的值较大时需要高精度运算 
string he(string s1,string s2){
 	string r;//存放总和
	int a[1000] = {0};
	int b[1000] = {0};
	int c[1000] = {0};
	
	//逆序存入整数数组
	int i;
	for(i = 0;i < s1.size();i++){
		a[i] = s1[s1.size() - i - 1] - '0';
	} 
	
	for(i = 0;i < s2.size();i++){
		b[i] = s2[s2.size() - i - 1] - '0';
	} 
	
	//逐位相加，逐位进位
	int len = s1.size();
	if(s2.size() > s1.size()) len = s2.size();
	
	for(i = 0;i < len;i++){
		c[i] = c[i] + a[i] + b[i];
		if(c[i] >= 10){
			c[i+1] = c[i+1] + c[i] / 10;
			c[i] = c[i] % 10;
		}
	} 
	//判断是否多出1位
	if(c[len] != 0) len++;

	//逆序将c数组拼接乘字符串
	for(i = len-1;i>=0;i--){
		//将c[i]+'0'这个ascii码强制转换为char类型 
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