/*解法二： 用字符串存储十六进制对应的字符，简化16 进制转为字符的过程
注意：
int最多表达到2^31-1, 10 位整数；
long long 最多表达到 2^63-1, 19 位整数；*/
#include <bits/stdc++.h>
using namespace std;
long long n, x;  // n是一个不超过18位的正整数
string s;
string t = "0123456789ABCDEF";
int main() {
  cin >> n;
  while (n != 0) {
    x = n % 16;
    // cout<<x<<endl;
    //将x转换为字符逆序存入字符串字符串s
    // x:0~9-> '0'~'9'
    // x:10~15 -> 'A'~'F'
    //将 n%16 转换为字符逆序存入s
    s = t[x] + s;
    n = n / 16;
  }
  if (s == "") {
    cout << 0;
  } else {
    cout << s;
  }
}
