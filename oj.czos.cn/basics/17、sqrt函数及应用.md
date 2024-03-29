# 17、sqrt ()函数及应用

## 一、判断完全平方数

1**、 什么是平方根？**

**平方根，又叫二次方根，表示为**

$$
\sqrt{2}
$$

$$
x^{2}=n,x=\sqrt{n}
$$



**例子：请写出下列算式的值**     
$$
\sqrt{100}\\
\sqrt{16}\\
\sqrt{25}\\
\sqrt{81}\\
$$
​         

2**、 如何在**C++**中求平方根？**

**例子：求根号**n**的值**

```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n = 36;
    //sqrt(n)：求n的平方根
    double r = sqrt(n);
    cout<<r<<endl;
}
```

**例子：判断变量**n**是否是平方数**

思路：整数n开根号取整和不取整是同一个数，就是完全平方数。

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*如何判断整数n是一个完全平方数(是另一个整数的平方)
    方法：n开根号(求平方根)之后是一个整数
    n的平方根取整和不取整是同一个数
    */
    double r = sqrt(n);
    // int x = r;//将小数强制转换为整数
    // cout<<r<<endl;
    // cout<<x<<endl;
    //(int)r：表示将小数r强制转换为整数
    if(r == (int)r){
    	cout<<n<<"是完全平方数"<<endl;
    }else{
    	cout<<n<<"不是完全平方数"<<endl;
    }
}
```



#### 1267:**【入门】完全平方数**

```cpp
/*题目描述
一个非负整数n，加上100是得到的n+100是一个完全平方数，
在加100的基础上再加上168得到的n+100+168又是一个完全平方数，请问该数最小是多少？

输入
无
输出
符合条件的最小的数

来源
简单循环
标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  i+100和i+268都是完全平方数
  i = 0开始找起，如果i不满豆上述条件，则i++
  i如果不满足上述条件，则循环，找到第一个满足条件的数之后，停止循环
  */
  int i = 0;
  //当i+100不是完全平方数，或者i+268不是，则循环
  while (sqrt(i + 100) != (int)sqrt(i + 100) ||
         sqrt(i + 268) != (int)sqrt(i + 268)) {
    i++;
  }
  cout << i << endl;
  return 0;
}
```



## 二、平方根的应用

#### 1023:【入门】判断素数

素数：>1的自然数中，如果该数除了 1和n以外，没有其他的因子，那么就是素数。

**解法一：从**2~n-1,**找**n**的因子，如果**n**没有因子，且**n>1**就是素数。**

```cpp
/*1023 - 【入门】判断素数
题目描述
任意输入一个整数，判断它是否为素数。是的话输出"T",不是的话输出"F".

质数（prime
number）又称素数，质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。

输入
输入只有一行，包括1个整数。（n≤109）

输出
输出只有一行。

样例
输入
57
输出
F
来源
简单循环

标签
简单循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*素数(质数)：大于1的自然数中，如果该数除了 1和自己以外没有其他因子
  就是素数，如：2 3 5 7 11 13 17 19 23...
  判断素数的思路：求出n的因子个数(不含1和n),如果因子个数为0就是素数
  */
  int n, i, c = 0;
  cin >> n;
  //循环n的因子范围(如：100的因子范围)
  for (i = 2; i <= n - 1; i++) {
    //如果i是n的因子，则计数器自增
    if (n % i == 0) {
      c++;
    }
  }
  //如果n除了1和自己以外没有因子
  if (c == 0 && n > 1) {
    cout << "T" << endl;
  } else {
    cout << "F" << endl;
  }
  return 0;
}
```

注意：如果n很大，提交之后，时间超限！ 



**解法二：优化程序，减少循环次数**

(1)  一个数n的因子，可以在2~n/2范围内找；

(2)  如果n找到因子，就可以停止循环；

```cpp
  int n, i, c = 0;
  cin >> n;
  //循环n的因子范围(如：100的因子范围)
  for (i = 2; i <= n / 2; i++) {
    //如果i是n的因子，则计数器自增
    if (n % i == 0) {
      c++;
      break;  //只要有因子就不是素数
    }
  }
  //如果n除了1和自己以外没有因子
  if (c == 0 && n > 1) {
    cout << "T" << endl;
  } else {
    cout << "F" << endl;
  }
```



**解法三：继续优化代码，减少循环次数。** 

> 利用因子成对求解的原理。

n= 100

2 50

4 25

5 20 

10 10

因子1<=因子2,

因子对的求解不重复，如果因子1>因子2,**就是重复的解**

推论：如果成对求解因子，因子1最多==因子2,因子1平方 = n,因子1=sqrt(n)(根号 n) 。

结论：一个整数n的因子对，一定可以在2〜sqrt(n)的范围内求解完毕。

10007 2~n/2要循环5000次左右

10007 2~sqrt (10001)循环 100 次左右

```cpp
  int n, i, c = 0;
  cin >> n;
  //循环n的因子范围(如：100的因子范围)
  for (i = 2; i <= sqrt(n); i++) {
    //如果i是n的因子，则计数器自增
    if (n % i == 0) {
      c++;
      break;  //只要有因子就不是素数
    }
  }
  cout << i;
  //如果n除了1和自己以外没有因子
  if (c == 0 && n > 1) {
    cout << "T" << endl;
  } else {
    cout << "F" << endl;
  }
```





#### 1084:【入门】因子求和

```cpp
/*1084 - 【入门】因子求和
题目描述
已知一个正整数N（20 <= N <= 800000000），
请你编写程序求出该数的全部因子（不包括1和n）的和。

输入
一个正整数n。
输出
一个整数代表n的因子和。

样例
输入
24
输出
35

来源
需要找规律的循环
标签
需要找规律的循环
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*采用成对求解的原理，循环2~sqrt(n),找n的因子对。
      如果两个因子不等，加2个，如果两个因子相等，加1个。
      第一步：输出n的因子。
      第二步：求因子和。

      比如：求100的因子和，采用因子成对求解的原理！
      循环2〜sqrt(n)找n的因子对!
      2  50
      4  25
      5  20
      10 10 */
  int n, i, s = 0;
  cin >> n;
  //循环n的因子范围2~sqrt(n),成对求解n的因子
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {  //如果i是n的因子
      if (i != n / i) {  //判断两个因子是否相等，或者使用i==sqrt(n)判断
        // cout<<i<<" "<<n / i<<endl;
        s = s + i + n / i;
      } else {
        // cout<<i<<endl;
        s = s + i;
      }
    }
  }
  cout << s << endl;
  return 0;
}

```





## 三、可选作业

#### 1060:【入门】判奇偶求和

#### 1061:【入门】判断质数

#### 1253:【入门】寻找肇事司机

#### 1092:【入门】aabb