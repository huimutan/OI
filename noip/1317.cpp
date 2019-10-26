#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    double r;
    r = (n - 2) * 180*1.0/n;
    cout << fixed<<setprecision(1)<<r;



}

