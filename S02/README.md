@[TOC](目录)
# 《顺序结构》
# NO.02A 主程序与cout语句
## 基本程序结构
**来看下面这段代码**
```cpp
#include <iostream>    //------------------头文件
using namespace std;   //----------------名字空间  
int main()					 //----------------主函数  
{
  cout<<"人要是行干一行行一行一行行行行行人要是不行干一行不行一行一行不行行行不行。";
  return 0;
}
```
例子中，include <iostream>是让编译器把输入输入的标准头文件包含到程序中，这个是“包含指令”，末尾没有“；”，
using namespace std是指明程序采用std（标准）命名空间的指令。
请把以上程序分段，每行输出使用`<<endl`（换行并清空缓冲区end line）结束


## cout
在C++中，输入输出使用“流”的方式实现，
```cpp
cout<<项目1<<项目2<<项目n；
```
```mermaid
flowchat
st=>start: “行不行”
op=>operation: 用 << 插入
op2=>operation: 输出流 cout
e=>end: 显示器
st->op->op2
op2->e
```

# NO.02B 变量与赋值
## 变量的作用
变量就像一个箱子,可以将你设置的变量数据存储起来,到需要的时候再进行调用
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190912120512230.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3hpbmdkaWFuMTE5,size_16,color_FFFFFF,t_70)
例如：
```cpp
int apple;
int pear,orange,banana;
int lemon=1,peach=2;	//定义一个名字为lemon的变量，并将其赋值为1；同理定义peach
```
我们解决问题写在纸上，计算机解决问题写在内存储器（内存）里。

阅读以下程序，想想会是怎样的输入结果，试一试
**第一个程序**
```cpp
#include <iostream>
using namespace std;
int main(){
  int litchi;
  litchi=22;
  cout<<litchi<<endl;
  litchi=33;
  cout<<litchi<<endl;
  litchi=litchi/3;
  cout<<litchi<<endl;
  return 0;
}
```
1. 变量可以用来储存数据
2. 当新数据存到变量中时，变量由原来的值改为新值。

## 变量的命名
1. = 字母（A~ Z，a~ z）、数字（0~ 9）、下划线（_）
2. one ≠ 数字
3. ≠ 关键字
4. 大写 ≠ 小写

程序中定义变量，计算机就在内存开辟一段空间来存储，太小：存不下；太大：浪费

## 需记住的变量类型
类型     | 范围
-------- | -----
int(整型)  | -2147483648～2147483647 
long long(超长整型)  | -9 223 372 036 854 775 808~9 223 372 036 854 775 807
float(单精度实型) | -3.4E+38~3.48+38
bool(布尔变量) | true/false

## 变量类型转换
阅读以下程序，想想会是怎样的输入结果，试一试
```cpp
#include <iostream>
using namespace std;
int main(){
  int money=23.5;
  cout<<money;
  return 0;
}
```
