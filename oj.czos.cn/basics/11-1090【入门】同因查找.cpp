/* 
1090: 【入门】同因查找

题目描述
求出10至1000之内能同时被2、3、7整除的数，并输出。

每行一个。

输入
无
输出
按要求输出满足条件的数，每行1个
提示
来源
需要找规律的循环 
*/

#include <iostream>
using namespace std;
int main()
{

  for (int i = 10; i <= 1000; i++)
  {
    //判断
    if(i%2==0 && i%3==0 && i%7==0){
      cout << i << endl;
    }
  }
  

  return 0;
}
