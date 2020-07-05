/* 
1363: 【入门】数字矩形(2)
时间限制: 1 Sec  内存限制: 16 MB
提交: 437  解决: 402  金币: 1
[提交][状态]
题目描述
从键盘读入一个整数n，输出如下图形

如：n=3，输出

123

123

123

 

如：n = 5，输出

12345

12345

12345

12345

12345

输入
一个整数n（n<=10）
输出
输出n行的图形
样例输入
3
样例输出
123
123
123
提示
*/

#include <iostream>
using namespace std;
int main()
{
  int i,n,j;
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      cout<<j;
    }
    cout<<endl;
  }


  return 0;
}
