#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {  //辗转相除求最大公约数
  if (a % b == 0) return b;
  return gcd(b, a % b);
}
int main() {
  int a, b, a1, b1, a2, b2;
  char c;
  scanf("%d/%d", &a1, &b1);
  while (scanf("%c%d/%d", &c, &a2, &b2) == 3) {
    a1 = a1 * b2 + a2 * b1;
    b1 = b1 * b2;
  }
  int m = gcd(a1, b1);
  if (b1 / m == 1)
    cout << a1 / m;
  else
    cout << a1 / m << '/' << b1 / m;
  return 0;
}