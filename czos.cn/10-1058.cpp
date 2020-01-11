/* 
1058: 【入门】求出100至999范围内的所有水仙花数。
题目描述
所谓水仙花数，就是指各位数字立方之和等于该数的数；a^3称为a的立方，即等于a×a×a的值。例如：因为153=1^3+5^3+3^3，所以153是一个水仙花数。
输入
无
输出
若干行，每行一个整数，表示该范围内的所有水仙花数。按从小到大的顺序输出。
提示
来源
简单循环 
*/

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
  int i = 100;
  int ge, shi, bai, he;
  while (i <= 999)
  {
    bai = i / 100;
    shi = i % 100 / 10;
    ge = i % 10;
    he = ge * ge * ge + shi * shi * shi + bai * bai * bai;
    //cout << i<<"="<<bai << " "<<shi<<" "<<ge<<endl;
    //cout << " 和="<<he<<endl;
    if (i == he)
    {
      cout << i << endl;
    }
    i++;
  }
  return 0;
}
