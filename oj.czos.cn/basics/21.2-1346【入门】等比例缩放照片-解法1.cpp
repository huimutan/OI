/*1346 - 【入门】等比例缩放照片
题目描述
如图所示的一张照片（图①），可以把它的宽度或者高度减小从而减少照片的尺寸（如图②、③、④）。但只有等比例缩放的情况下照片才是最好看的，如图④；图②照片被压扁，图③照片被拉长。
给定图片的原始尺寸以及n组要压缩的尺寸，请问哪组压缩后的数据的宽高比最接近原始数据？如果有多组压缩尺寸的宽高比都是一样的且都是最接近原始数据的，那么输出压缩后面积最小的那组数据。


输入
第1行，2个整数x和y，代表图片的原始尺寸的宽和高

第2行，一个整数n，代表接下来有n组压缩后的尺寸（n<=100）

接下来n行，每行2个数，代表n组压缩后的宽和高（确保输入的宽 >=
高）（本题所有照片的宽高均在1~10000之间）

输出
宽高比和原始图片最接近的宽高数据，如果有多组这样的数，输出面积最小的那组（不存在多组宽高比和原始数据一样接近且面积又一样的数据）

样例
输入
10 4
4
20 4
60 10
15 9
10 6
输出
10 6
来源
二维数组 结构体

标签
二维数组结构体
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // cout<<abs(-10)<<endl;//绝对值(10)=10绝对值(-10)=10
  /*
  求出所有的数据中,αbs(长宽比原始长宽比)最小的那组数据
  如果有多个最小的,取面积最小的
  */
  // x,y表示原始数据长宽
  int x, y;
  int a[1000][2];
  // mi:存放abs(每组数据长宽比-原始长宽比差值)的最小值
  int n, i, rx, ry;  // rx和ry存储最终的结果
  cin >> x >> y;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1];
  }
  //打擂台找到最接近原始数据长宽比的数据
  rx = a[0][0];
  ry = a[0][1];
  double t1 = x * 1.0 / y;
  double t2 = a[0][0] * 1.0 / a[0][1];
  double mi = abs(t1 - t2);
  //循环数组剩余的数据
  for (i = 1; i < n; i++) {
    t2 = a[i][0] * 1.0 / a[i][1];  //每组数据的长宽比
    if (abs(t1 - t2) < mi ||
        (abs(t1 - t2) == mi & a[i][0] * a[i][1] < rx * ry)) {
      mi = abs(t1 - t2);
      rx = a[i][0];
      ry = a[i][1];
    }
  }
  cout << rx << " " << ry << endl;
  return 0;
}