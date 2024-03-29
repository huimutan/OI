/*1253 - 【入门】寻找肇事司机
题目描述
一辆卡车违反交通规则，撞人后逃跑。现场有三人目击事件，但都没有记住车号，只记下车号的一些特征。
    甲说：牌照的前两位数字是相同的；
    乙说：牌照的后两位数字是相同的，但与前两位不同；
    丙是数学家，他说：四位的车号刚好是一个整数的平方。
请根据以上线索求出车号。

输入
无
输出
输出肇事司机的车牌号码

来源
简单循环
标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[4] = {0};
  for (int i = 1000; i <= 9999; i++) {
    int x = i;  // i用作循环，不能直接处理i；
    for (int j = 0; j <= 3; j++) {
      a[j] = x % 10;
      x /= 10;
    }
    if (a[0] == a[1] && a[2] == a[3] && a[0] != a[2] &&
        sqrt(i) == (int)sqrt(i)) {
      cout << i;
    }
  }
  return 0;
}
