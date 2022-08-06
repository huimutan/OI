# 第1章string类型

## 一、string基础知识

1、问：什么是string?   美[strɪŋ]
     答：string是C++的STL(Standard Template Library即标准模板库)提供的字符串类，用于处理字符串相关的问题。

2、问：string和char s[] 有什么区别？
    答：(1)字符数组本质上还是数组，因此长度固定；string可以理解为长度不限的字符串；
        (2)字符数组的系统定义的函数过少，导致操作不方便；string集成大量的系统函数，方便操作；
        (3)字符数组由于本质是数组，因此不能进行比较运算以及+运算；string可以直接做比较和+运算；

3、问：没学过char s[] 可以学string吗？

    答： (1)char s[] 由于使用的还是数组原理因此有利于同学对于数组本质的把握，以及提升程序驾驭能力；因此建议先学char s[] 再学string会觉得比较轻松；
    (2)小学阶段，可以不学char s[] 直接学string;
    (3)有char s[] 基础的同学，务必注意字符数组和string的区别，不要搞混了；

4、string的特点小结
string提供了字符串操作常见的函数，方便在具体问题中直接调用。

>(1)长度可以理解为不限定。
>(2)string可以做加法，可以比较大小！
>(3)string有很多系统定义函数，方便我们编程。

注意：将string理解成一个特殊的数组，字符数组。

## 二、string的读入和遍历

### 2.1 string的读入和遍历基础知识

> (1) getline(cin,s):读入一个字符串（直到换行），可以含空格；
> (2) cin:读入一个字符串，不能含空格；
> (3) s.size（）:求字符串s的长度；
> (4) s[下标 i ]：获取字符串的某个下标对应的字符；
> (5) 掌握string的+的用法，注意string使用下标常见的错误；(例题：1093：【入门】打印小写字母表，请用string的+法来实现；)

例子1：string的读入和遍历基础

```CPP
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  // cin>>s;
  cout << s.size() << endl;

  getline(cin, s);
  cout << s << endl;

  cout << "------------" << endl;
  //遍历字符串每个字符
  int i;  // i作为string的下标
  // s.size（）:求字符串s的长度
  for (i = 0; i < s.size(); i++) {
    cout << s[i] << endl;
  }

  cout << "------------" << endl;
  string s2;
  s2 = "hello world!";
  cout << s2 << endl;
}
```



例子2：string的加法和比较运算

```CPP
#include <iostream>
using namespace std;
int main() {
  //在字符串s上,累加字符串
  string s;
  s = s + "hello";
  s = s + "student.";
  cout << s << endl;
  //在字符串s上,累加字符
  string s2;
  s2 = s2 + 'h';
  s2 = s2 + 'i';
  cout << s2 << endl;
  //常见错误
  /*
  string s3;
  cout<<s3.size<<endl;
  //s3是一个长度为0的字符串
  //不能访问下标0和下标1,数组下标越界了
  s3[0]='h';
  s3[1]='i';
  cout<<s3<<end1;
  */
  string s4 = "ok";
  s4[0] = 'h';
  s4[1] = 'i';
  cout << s4 << endl;
}
```





### 2.2 课堂练习
#### 1093:	【入门】打印小写字母表
```CPP
/*1093 - 【入门】打印小写字母表
题目描述
把英文字母表的小写字母按顺序和倒序打印出来。(每行13个)

输入
无

输出
输出四行

样例
输入
输出
abcdefghijklm
nopqrstuvwxyz
zyxwvutsrqpon
mlkjihgfedcba
来源
字符型

标签
字符型
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;  // 字符串
  char c;
  for (c = 'a'; c <= 'z'; c++) {
    s = s + c;
    if (c == 'm' || c == 'z') {
      s = s + '\n';  //思考：可以用endl代替吗
    }
  }
  for (c = 'z'; c >= 'a'; c--) {
    s = s + c;
    if (c == 'n') {
      s = s + '\n';
    }
  }
  cout << s;
  return 0;
}
```



#### 1101:【入门】时间的差！



| 0    | 1    | ：   | 1    | 0    | ：   | 1    | 0    |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    |

```CPP
/*1101 - 【入门】时间的差！
题目描述
看到两个标准格式的时间，有小时，有分钟，有秒，格式如：h:m:s，即 时:分:秒
你想知道，这两个时间之间相差多少吗？

输入
输入包括两行，两行均为一个“时:分:秒”格式的时间。且本题保证第一个时间一定大于第二个时间！

输出
输出就是输入的两个时间之间的秒数差。

样例
输入
01:10:10
00:30:30
输出
2380
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;

//配合自定义函数
//求一个字符串时间距离00:00:0的总秒数
int num(string s) {
  // xx:xx:xx
  // 01:10:10
  int r = 0;
  //'0'->48 '1'->49 '2'->50
  int h = (s[0] - '0') * 10 + (s[1] - '0');
  int m = (s[3] - '0') * 10 + (s[4] - '0');
  int e = (s[6] - '0') * 10 + (s[7] - '0');
  r = h * 60 * 60 + m * 60 + e;
  return r;
}
int main() {
  // 00:00:00
  // cout<<num("01:10:10");
  string s1, s2;
  cin >> s1 >> s2;
  cout << num(s1) - num(s2);
  return 0;
}
```

注意：

string类型的变量获取其中一位，是char类型！



#### 1115:【入门】数字和

思路： 用字符串读入一个长整数， 遍历每一位， 将这一位字符对应的真实整数加到总和
上。

```CPP
/*1115 - 【入门】数字和
题目描述
输入一个很大的数，求各位上的数字和。

输入
一个很大的整数（不超过200位）

输出
一个整数

样例
输入
123
输出
6
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int r;  //和，初值默认为 0
string s;
int i;
int main() {
  cin >> s;
  for (i = 0; i < s.size(); i++) {
    r += (s[i] - '0');
  }
  cout << r;
}
```

注意：
##### 1 、 理解局部变量和全局变量的差异！
( 1 ) 、定义位置不同： 全局变量定义在 main 函数的外面， 局部变量定义在函数内部；
( 2 )、生命周期不同： 局部变量， 仅在变量定义时对应的大括号的闭括号中有效 ； 全局变量， 在所有函数中都有效 ；
( 3 ) 、 是否有初值：
	局部变量定义不赋值，则初始值随机；
	全局变晕定义不赋值， int  初值为 O,  小数初值为 0. O,  字符类型初值 '\O', bool初值 false , int a[1OO] 初值都为0。



例子：
```CPP
#include <bits/stdc++.h> 
using namespace std;
int a,b,c; //全局变量
int main(){
	int x, y, z; //局部变量
｝
```

##### 2、注意 掌握常量的用法
INT_MAX: 常量，代表整数最大数
INT_MIN: 常量，代表整数最小数

##### 3、注意尽量减少循环 ，以及避免定义不必要的数组
比如： 求n个数的最小数， 一次循环， 且不需要数组就能求解 ， 这样的好处是可以**简化程序， 提高效率！**

```CPP
#include <bits/stdc++.h> 
using namespace std;
//INT_MAX: 常量， 代表整数最大数
//INT_MIN:  常鼠， 代表整数最小数
int n,x,mi = INT_MAX,i;
int main(){
    //求 n 个数的最小数
    cin>>n;
    for( i = 0;i < n;i++){ 
        cin>>x;
        if(x<mi){
            mi=x;
        }
    }
    cout<<mi;
}
```

#### 1480 - 【基础】找字典码最小的字符串

```CPP
/*1480 - 【基础】找字典码最小的字符串
题目描述
编写程序，针对输入的N个不同的字符串，输出其中字典码最小的字符串。

输入
输入第一行给出正整数N；随后N行，每行给出一个长度小于80的非空字符串，其中不会出现换行符，空格，制表符。

输出
输出字典码最小的字符串

样例
输入
5
Li
Wang
Zha
Jin
Xian
输出
Jin
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  // s：代表字典码最小的字符串，x：代表运算结果
  string mi, x;
  int n, i;
  cin >> n;
  //先读入一个字符串，作为被比较的对象
  //假设它是字典码最小的字符串
  cin >> mi;
  //再次读入n-1个字符串，并逐个和mi比较（打擂台）
  for (i = 2; i <= n; i++) {
    cin >> x;
    if (x < mi) {
      mi = x;
    }
  }
  cout << mi;
}
```

### 2.3 课后作业

1475:【入门】字符串对比
1478:【入门】出现次数最多的小写字母
1098:【入门】判断是否构成回文
1102:【入门】字符串中的空格移位
1125:【基础】删除字符串中间的*
1133:【入门】字符串的反码
1312:【入门】看完动漫要几天？
1321:【基础】时钟旋转(2)
1402:【入门】字符串加密？
