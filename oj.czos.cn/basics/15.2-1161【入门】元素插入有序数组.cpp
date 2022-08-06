/*1161 - 【入门】元素插入有序数组
题目描述
给你一个整数n和一个数列(数列个数不超过1000)，这个数列保证从小到大排列，
现要求将这个整数n插入到数列中，使新的数列仍然从小到大排列。

输入
第一行一个整数n ：等待插入的数量
第二行一个整数m ：数列中数的个数
第三行m个整数（空格隔开）

输出
一行整数：新的数列（空格隔开）

样例
输入
2
4
1 3 4 5
输出
1 2 3 4 5
来源
数组问题

标签
数组问题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[1000], i;
  int x, y;  // x：数组插入元素的下标，y：要插入的元素
  int n;     //等待插入的数量
  cin >> y >> n;
  for (i = 0; i < n; i++) {  //读入数组的元素
    cin >> a[i];
  }
  //假设没有元素比y大,y应该插入到最后一个元素的后面
  x = n;
  //第一步：寻找y应该插入的下标
  for (i = 0; i < n; i++) {
    //找到第一个元素a[i]>=y时,下标i就是y应该插入的下标
    if (a[i] >= y) {
      x = i;
      break;  //停止循环,不能继续找,因为后面的元素都比y大
    }
  }
  // cout<<x<<endl;//验证我们找到的下标是正确的
  //第二步：逆序从n-1开始到x结束,元素顺序后移
  for (i = n - 1; i >= x; i--) {
    a[i + 1] = a[i];
  }
  //第三步：在下标为x的位置插入元素y
  a[x] = y;
  n++;
  //输出插入结果
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
