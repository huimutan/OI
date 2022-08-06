# 三、string的常见函数
## 3.1 string的查找和截取
### 1、相关函数
find(子串substr):查找子字符串第一次出现的下标，没有返回string::npos(注
意判断其为-1):
find(substr,x):在字符串的下标x之后，查找子串substr:
substr(开始位置i,子串长度len):截取子字符串，当len>字符串长度的时候，
只取剩余的：
substr(开始位置i):截取子字符帛，从下标为i开始截取到最后：

### 2、例题讲解

例子：请求出父字符串s中首次出现子字符串s1的下标，如果s1在s中不存在，
请输出no:

```CPP
string s="goodgood study";
string s1= "student";
int p =s.find(s1);
if(p!=-1)	cout<<p;
else		cout<<"no";
```

例子：请一句英文中的第2个单词截取出来，该英文句子中单词之间用一个空格隔
开：

```CPP
string s= "this is a book";
//截取起始下标=第一个空格下标+1，本题=5
//截取长度=从第一个空格开始找第2个空格的下标
int p1=s.find(" ");
int p2=s.find(" ",p1+1);
string s2=s.substr(p1+1,p2-p1);
cout<<s2;
```



#### 1591:【入门】求子串的位置

请分别使用find及substr函数求解该问题；

![20220527_080502_189](01%E3%80%81string%E7%B1%BB%E5%9E%8B2/20220527_080502_189.png)

```CPP
/*1591 - 【入门】求子串的位置
题目描述
请问在一个父字符串s中是否存在子字符串t。如果存在，则输出子字符串t在父字符串中所有的起始位置，如果不存在，则输出-1。
比如：假设父字符串s = "Go Abc good goole!"，子字符串t = "go"，那么输出位置：
8
13

再比如：假设父字符串s = "Go Abc good goole!"，子字符串t =
"hi"，那么输出结果：-1。

输入
第一行输入父字符串的值（字符串长度不超过100）；

第二行输入子字符串的值（子字符串长度不超过100）；

输出
输出子字符串在父字符串中所有的位置，如果父字符串中不存在子字符串，请输出-1。

样例
输入
Go Abc good goole!
go
输出
8
13
说明
请分别用find及substr两种方法求解；

来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //解法一：使用find求解
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int p = s.find(t);
  //如果找不到
  if (p == -1) {
    cout << -1;
  } else {
    //当s中能够找到子字符串t时
    while (p != -1) {
      cout << p + 1 << endl;
      //继续找下一个t出现的下标
      p = s.find(t, p + 1);
    }
    return 0;
  }
}
```



```CPP
  //解法二：使用substr求解
  string s, t, x;  //截取出来的每个子字符串
  getline(cin, s);
  getline(cin, t);
  bool f = false;  //假设不存在
  /*    从每个字符开始截取t.size（）个子字符串出来
  判断截取出来的结果是否是要找的字符串t,如果是，输出i +1 */
  for (int i = 0; i < s.size(); i++) {
    x = s.substr(i, t.size());  // cout<<x<<endl;
    if (x == t) {
      cout << i + 1 << endl;
      f = true;
    }
  }
  if (f == false) {
    cout << -1;
  }
```



#### 1116 - 【入门】调换位置

![20220527_090555_988](01%E3%80%81string%E7%B1%BB%E5%9E%8B2/20220527_090555_988.png)

```CPP
/*1116 - 【入门】调换位置
题目描述
将用逗号隔开的两个英语单词交换位置输出。

输入
一行以逗号隔开的两个英文单词。（字符串长度不超过100）

输出
将两个单词交换后输出的结果

样例
输入
abc,de
输出
de,abc
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //思路：将逗号之后的单词截取(substr)出来，将逗号之前的单词截取，交换位置输出。
  string s, s1, s2;
  cin >> s;
  int p = s.find(",");
  s1 = s.substr(0, p);
  s2 = s.substr(p + 1);
  cout << s2 << "," << s1;
  return 0;
}

```



### 3、作业练习

1105:【基础】字符串连接

1477:【入门】字符串出现次数



## 3.2 string的删除、插入和替换

### 1、相关函数

> erase(开始下标i,删除长度len):删除字符串第i个下标开始的len个字符；
>
> erase(开始下标i):删除字符串第i个下标开始往后的所有字符；
>
> insert(插入下标，插入字符串s):在字符串下标为i的位置插入一个字符串s;
>
> replace(i,len,str):从下标为i开始，替换len个字符为str`

```CPP
//例子：erase.、insert和replace函数的使用
#include <bits/stdc++.h>
using namespace std;
int main（）{
    string s= "this is a book";
    string s2= s.substr(5,3);
    cout<<s2<<end1;  //is 
    s.erase(5,3);
    cout<<s<<endl;  //this a book
    s.insert(5,"is ");//插入is
    cout<<s<<end1;   //this is a book
    s.replace(10,4,"student");
    cout<<s<<endl;
}
```



### 2、例题讲解
#### 1131:【入门】删除指定字符分别掌握假删除和真删除的实现；

解法一：假删除
```CPP
#include <bits/stdc++.h>
using namespace std;
int main（）{
    string s;char c;cin>>s>>c;
//假删除：遍历每个字符，除了要删除的字符c以外，剩余的输出;
    for(int i=0;i<s.size（）;i++){
        if(s[i]!c) cout<<s[i];
    }
}
```



解法二：真删除
```CPP
#include <bits/stdc++.h>
using namespace std;
int main（）{
    //sdf$$$sdf
    //当s中含有要删除的字符c时，找到c的位置，并删除
    string s;char c;cin>>s>>c;
    int p=s.find(c);//当s中有c时
    while(p!=-1){
        //删除s中的c
        s.erase(p,1);
        //计算s中是否还有c
        p=s.find(c);
    }
    cout<<s;
}
```



1570:【入门】字符替换
分别掌握使用s[i]直接更改以及replace函数替换的实现；

解法一：
```CPP
/*1570 - 【入门】字符替换
题目描述
把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。

输入
只有一行，由一个字符串和两个字符组成，中间用单个空格隔开。字符串是待替换的字符串，字符串长度小于等于100个字符，且不含空格等空白符；
接下来一个字符为需要被替换的特定字符；
接下来一个字符为用于替换的给定字符。

输出
一行，即替换后的字符串。

样例
输入
hello-how-are-you o O
输出
hellO-hOw-are-yOu
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  //判断每个字符是否是要替换的字符
  //如果是，则直接替换成新字符
  string s;
  char c1, c2;
  cin >> s >> c1 >> c2;
  int i;
  for (i = 0; i < s.size(); i++) {
    if (s[i] == c1) {
      s[i] = c2;
    }
  }
  cout << s;
  return 0;
}

```
解法二：使用replace函数替换

```CPP
  //当s中含有字符c1时，替换为字符c2
  string s;
  string c1, c2;
  cin >> s >> c1 >> c2;
  int p = s.find(c1);
  while (p != -1) {
    s.replace(p, 1, c2);
    p = s.find(c1);
  }
  cout << s;
```



### 3、作业练习
1112:【入门】查找子串并替换

1476:【基础】字符串编辑





## 3.3字符类型判断/转换，数组/string排序

### 1、相关函数

字符类型判断函数：(非string函数)

> √ isalpha(c):判断c是否为字母
>
> √ islower(c):判断是否为小写
>
> √ isupper(c):判断是否为大写
>
> √ isdigit(c):判断是否为数字
> 说明：返回非0表示真，返回0表示假；

字符类型转换函数：(非string函数)

> √ tolower(c):字符转小写
>
> √ toupper(c):字符转大写
> 说明：返回int;

排序和倒序函数：(非string函数)

> √ sort(起始地址，结束地址+1)：数组升序排序
>
> √ reverse(起始地址，结束地址+1)：数组逆序

获取头尾指针

> √ s.begin（）:获取字符串s的头位置（指针）
>
> √ s.end（）:获取字符串s的尾位置（最后一个字符后面的位置）（指针）

注意：
bool类型是一个表示真假的类型，真值为true,假值为false!

bool f=true;//直接赋值

bool f=3>2;//赋值为判断式

bool f=3>2 && 5==5;

true打印，结果为1,false打印结果为0

if的判断、while的判断、for的判断，除了写判断式以外，其实也可以是一个整数类型；如果整数为0，会判断为假，非0会判断为真！

```CPP
int a =5;
if(a){
	cout<<"yes";
}else{
	cout<<"no";
}
```

因此，不要出现下面的写法，下面的写法，if的判断永远为真！

```CPP
int a=0;
if(a=5){  //这里
	cout<<"yes";
}else{
	cout<<"no";
}
cout<<a<<endl;
```

例子：is函数的使用
```CPP
char c;cin>>c;
//包含大写字母或者小写字母
//c>='a'&&c<='z'|| c>='A'&&C<='Z'
if(isalpha(c)){
    cout<<"字母"<<endl;
    if(islower(c)){
    	cout<<"小写"<<endl;
    }else if(isupper(c)){
    	cout<<"大写"<<endl;
	}
//c>='0'&&c<='9'
}else if(isdigit(c)){
	cout<<"数字"<<endl;
}
```

例子：to函数的使用

```CPP
char c;
c='b';
//将ascii码赋值给字符，获取编码对应的字符
c = toupper(c);
cout<<c<<endl;
```



例子：sort和reverse函数的使用

有a数组如下：

![20220528_110541_563](01%E3%80%81string%E7%B1%BB%E5%9E%8B2/20220528_110541_563.png)

```CPP
#include <bits/stdc++.h>
using namespace std;
//辅助降序排序函数
bool cmp(int a,int b){
  /*   if (a > b) {
      return true;
    } else {
      return false;
    } */
  return a > b;
}
int main(){
    int a[5]={3,2,1,5,4};
    int n =5;
    sort(a,a+n);//对数组所有元素升序排序
    //对数组第2个数~倒数第2个数升序排序sort(a+1,a+n-1);
    sort(a,a+n,cmp);
    //数组逆序函数
    reverse(a,a+n);
    for(int i =0;i< n;i++){
    	cout<<a[i]<<"";
    }
}

```

注意：数组的本质是数组中下标为0的元素的地址；（首元素的地址）

例子：使用sort对字符串的字符进行排序！

```CPP
string s ="jsiaszldl";
sort(s.begin(),s.end());
cout<<s;
```

### 2、例题讲解

1097:【入门】统计字符的个数

```CPP
/*1097 - 【入门】统计字符的个数
题目描述
从键盘中任意输入一串字符,直至输入"#"字符代表结束。请编程统计输入的字符中的大写字母,小写字母和数字字符的个数分别是多少?
输入
输入只有一行，包括一串字符。(长度小于20，且没有空格)

输出
输出只有一行，包括3个整数。分别代表大写字符，小写字符和数字字符的个数。

样例
输入
daDSALDdcada3240#
输出
5 7 4
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int c1, c2, c3;
string s;
int main() {
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    //如果是大写字母
    if (isupper(s[i])) {
      c1++;
    } else if (islower(s[i])) {
      c2++;
    } else if (isdigit(s[i])) {
      c3++;
    }
  }
  cout << c1 << " " << c2 << " " << c3;
}
```
#### 1408:【入门】合法的变量名？

```CPP
/*1408 - 【入门】合法的变量名？
题目描述
James在一节C++课程上，准备为自己的程序定义变量名称。老师告诉James，一个合法的变量名应该满足如下的三个条件：

1、只能由字母（大写或者小写）、数字及下划线（_）组成

2、不能以数字开头

3、不能是C++中有特殊含义的单词，由于James是C++的初学者，只学过int、double、cout、cin这四个有特殊含义的单词，因此James只要避开这几个单词就可以。

请你编程帮助James判断他定义的变量名是否合法。

下表中列举了一些合法的变量名和非法的变量名的案例供你参考。

合法变量名案例

非法变量名案例

x

sum

sum_x

sum2

_sum

INT注意：这是合法的，因为在C++中是区分大小写的，int是表示整数类型，但INT不是）；

sum x：有空格（只能是字母、数字或下划线）

1x：以数字开头

int：有特殊含义

a#：有特殊字符“#”（只能是字母、数字、下划线）。



输入
一行，包含一个字符串，是James为变量起的名字，且长度不大于20。

输出
一行，如果是合法的C++变量名，则输出yes，否则输出no。

样例
输入
sum
输出
yes
输入
sum x
输出
no
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  bool f = true;    //假设合法
  getline(cin, s);  //判断非法的情况
  // 1、变量名含有除了字母数字下划线以外的字符
  for (int i = 0; i < s.size(); i++) {
    if ((isalpha(s[i]) || isdigit(s[i]) || s[i] == '_') == false) {
      f = false;
      break;
    }
  }
  // 2、以数字开头
  if (isdigit(s[0])) {
    f = false;
  }
  // 3、含有4个关键词
  if (s == "int" || s == "double" || s == "cin" || s == "cout") {
    f = false;
  }
  if (f) {
    cout << "yes";
  } else {
    cout << "no";
  }
}
```

1117:【基础】重新排列

```CPP
/*1117 - 【基础】重新排列
题目描述
现在有一个18位以内的自然数，你可以将组成这个数的各位数字重新排列，得到一个数值为最小的新数，但新数的位数保持不变。请编程打印出重新排列后的新数。（如：231重新排序后位数不变的最小数是123，而23105重新排序后位数不变的最小数是10235。）

输入
一个整数（位数 <= 18）

输出
重新排列后最小的新数

样例
输入
382
输出
238
来源
字符串

标签
字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /*
  对20位整数的每一位从小到大排序
  如果第一个元素为0',则字符串中第一个非'0'交换
  231005->001235->10023*/
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  char t;  //用于变量的交换
  //如果首元素为'0'，则将其与第一个非'0'元素交换
  if (s[0] == '0') {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '0') {
        // t= s[e];
        // s[0] = s[i];
        // s[i]= t;
        swap(s[0], s[i]);
        break;
      }
    }
  }
  cout << s;
}
```
注意：
swap(a,b):交换变量a、b的值；

### 3、作业练习

1569:【入门】字符串分离
1458:【入门】粉碎数字
1451:【入门】n个一位数能够组成的最大数
1452:【入门】n个一位数能够组成的最小数





