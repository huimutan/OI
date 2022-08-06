# 三、string的常见函数
## 3.4 string和数值转换

### 1、相关函数

类型转换函数

> √ stoi(s):将字符串s转换为对应的整数
>
> √ stoll(s):将字符串s转换为对应的long long
>
> √ stof(s):将字符串s转换为对应的float
>
> to_string(int n):将整数n转换为字符串
>
> to_string(double a):将double型的a转为字符串，转换成的字符串小数点后有6位

本功能需要C++11的语法支持：

特别注意：考noip的同学，请不要使用stoi函数（不要使用C+11的函数），而是改用atoi替代，用法案例如下：

```CPP
string s ="123";
//s.c_str（）:将字符串s转换为字符数组
int x= atoi(s.c_str());
cout<<x 10;
```

> //使得devcpp支持sto函数
> //工具->编译选项->勾上编译时使用以下命令
> //-std=c++11



例子：
```CPP
#include <bits/stdc++.h>
using namespace std;
int main（）{

	string s ="100";
    int x= stoi(s);
    cout<<x+1<<endl;
	string s2="12345678912345";
	long long y= stoll(s2);
    cout<<y+1<<endl;
    
	string s3="12.34";
    float z =stof(s3);
    cout<<z+1<<endl;
    
	int a= 10;int b=20;
	string t1=to_string(a);
    string t2=to_string(b);
    cout<<t1+t2<<end1;
}
```



#### 1128:【基础】整数串拆段

![20220603_110618_933](01%E3%80%81string%E7%B1%BB%E5%9E%8B3/20220603_110618_933.png)

第一步：将整数能够拆分的求和方案都拆分求和过一遍
13304,5位数有4个拆分方法，s.size（）长度的整数，有s.size)-1个拆分方法！

i=0 0->1	1->最后
i=1 0->2	2->最后
i=2 0->3	3->最后
i=3 0->4	4->最后
	0->i+1	i+1->最后
1+3304=3305
13+304=317
133+04=137
1330+4=1334

第二步：在所有的和中找出最小的素数
第三步：判断，如果没有最小的素数，输出-1

```CPP
/*题目描述
将一个长度小于10位的数字串拆成2段，使其和为最小的素数。
例如数字串‘13304’
拆的方法有:
1 + 3304 = 3305
13 + 304 = 317
133 + 04 = 137
1330 + 4 = 1334
从上面可看出，和为素数的有：317 与137，最小的是137

输入
一个长度小于10的数字串
输出
最小的和为素数的数，若无素数则输出 -1

样例
输入
13304
输出
137
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
//定义函数，判断素数
bool sushu(int n) {
  bool f = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0 || n <= 1) {
      f = false;
      break;
    }
  }
  return f;
}
int main() {
  string s, s1, s2;
  int x, y, mi = INT_MAX;
  cin >> s;
  //将整数s截取出2个子字符串,穷举所有可能的求和方案
  for (int i = 0; i < s.size() - 1; i++) {
    s1 = s.substr(0, i + 1);
    s2 = s.substr(i + 1);
    // cout << s1 << " " << s2 << endl;
    x = stoi(s1);
    y = stoi(s2);
    // cout << x + y << " " << sushu(x + y) << endl;
    if (sushu(x + y) && x + y < mi) {
      mi = x + y;
    }
  }
  if (mi == INT_MAX) {
    cout << -1;
  } else {
    cout << mi;
  }
}
```

#### 1114 - 【基础】趣味填空

```CPP
/*1114 - 【基础】趣味填空
题目描述
小华的寒假作业上，有这样一个趣味填空题：
给出用等号连接的两个整数，如“1234＝127”。当然，现在这个等号是不成立的。题目让你在左边的整数中间某个位置插入一个加号，看有没有可能让等号成立。以上面的式子为例，如果写成123+4=127，这就可以了。
请你编写一个程序来解决它。

输入
只有那个不相等的式子。已知，等号两边的整数都不会超过2000000000。
输出
如果存在这样的方案，请输出那个正确的式子。如果不存在解决方案，请输出“Impossible!”（引号中的部分）。

样例
输入
1234=127
输出
123+4=127
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
/*
1234=127
第一步：将=左右的整数拆出来
left=1234
right= 127
第二步：将=左侧的数字，能够组合的方案罗列
1+234
12+34
123+4
第三步：
判断罗列方案等式是否成立，成立输出等式
如果无解，输出给定的字符串*/
string s, l, r, s1, s2;
int p, x, y, z;
bool f;  // f默认初值false
int main() {
  cin >> s;
  p = s.find("=");
  l = s.substr(0, p);
  r = s.substr(p + 1);
  z = stoi(r);
  // cout<<l<<""<<r;
  //将左侧字符串1,可行的求和方案罗列
  for (int i = 0; i < l.size() - 1; i++) {
    s1 = l.substr(0, i + 1);
    s2 = l.substr(i + 1);
    // cout << s1 << "" << s2 << end1;
    x = stoi(s1);
    y = stoi(s2);
    if (x + y == z) {
      f = true;
      cout << x << "+" << y << "=" << z << endl;
    }
  }
  //如果不存在可行方案
  if (f == false) {
    cout << "Impossible!";
  }
}
```



3、作业练习
1130:【入门】简单a+b
1129:【入门】简单a*b
1325:【基础】表达式的值(III)



3.5 string常见函数对照表
string提供了字符串操作常见的函数，方便在具体问题中直接调用。

| 函数                                        | 举例说明                                                     |
| ------------------------------------------- | ------------------------------------------------------------ |
| size()                                      | 求字符串长度， 等同千  length()函数                          |
| s [下标i]                                   | 获取字符串的某个字符，  等同于 at(i) 函数；s = "abed";  cout<<s[O]<< s.at(2)<< endl; |
| getline(cin,s)                              | 读入一整行（直到换行）， 包括读入的空格                      |
| find(子串substr)                            | 查找子字符串第一次出现的下标， 没有返回 string::npos ( 注意判断其为-1)  如：s= "abcdef ";  cout<<s.find("cd  ")<<endl; 结果： 2  如：  strings="hello world";  cout<<(s.find("abc")== -1}<<endl;  结果：1 (true 输出为1) |
| find(substr,x)                              | 在字符串的第 x 个位置之后， 查找子串 substr。                |
| substr(开始位置 i, 子串长度len)             | 截取子字符串， 当 len>字符串长度的时候 ，只取剩余的。注意： i要在下标范围内；  s= "abcdef ";  cout<<s .substr(3,2)<<s.substr (3, 20);  结果是：dedef  注意： 如果不同第二个参数 len , 那么截取到最后。 |
| erase( 开始位置 i, 删除长度 len)            | 删除字符串第i个位置开始的 len 个字符  s= "abcdef "; s.erase(2, 3);  cout<<s<<endl; 结果是： abf  注意： 如果不写第二个参数len, 那么删除到最后。 |
| insert (插入位置， 插入字符串  s)           | 在字符串第i个位置插入一个字符串 s。s= "abcdef";  s.insert(2,"+"）；  cout<<s<<endl;  结果是： ab+cdef |
| replace(开始位置i,长度len,要替换的字符串ss) | 用字符串ss替换字符串中i开始长度是len的一段，例如：s="abcdef";<br/>s.replace(2,1,”123”)；结果是：ab123def |
| 字符判断                                    | isalpha（）:判断是字母  islower():判断是否是小写  isupper（）:判断是否是大写  isdigit():判断是否是数字 isblank():判断是否是空格 |
| 字符转换                                    | tolower(s[i]):字符转小写  toupper(s[i]):字符转大写           |
| 获取头尾指针                                | 范围s的头尾指针，和数组指针一致。<br/>s.begin（）;s.end（）;可以用于排序函数  <br />sort(s.begin(),s.end());reverse(s.begin(),s.end()); |
| 字符串转整数、转长整数、转浮点数            | stoi("123")<br/>long long stoll("123456789123") <br />float stof("12.358)<br/>本功能需要C++11的语法支持！ |
| 整数转字符串                                | to string(intn):功能：将整数转换成字符串<br/>to_string(double a):功能：将实数转换成字符串，转换成的字数点后有6位<br/>本功能需要C++11的语法支持！<br/> ![20220603_020602_302](01%E3%80%81string%E7%B1%BB%E5%9E%8B3/20220603_020602_302.png) |
| 特别注意                                    | 特别注意：考noip的同学，请不要使用stoi函数(不要使用C++11的函数)，而是改用atoi替代，用法案例如下：<br/>string s ="123";<br/>//s.cstr（）:将字符串s转换为字符数组<br />int x =atoi(s.c_str（）);<br />cout<<x 10; |





