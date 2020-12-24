#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    double a;
    double b;
    double c;
    cin>>a>>b>>c;
    cout<<a<<'+'<<b<<'+'<<c<<'='<<a+b+c<<endl;
    cout<<a<<'*'<<b<<'*'<<c<<'='<<a*b*c<<endl;
    cout<<'('<<a<<'+'<<b<<'+'<<c<<')'<<'/'<<'3'<<'=';
    cout<<fixed<<setprecision(3)<<((a+b+c)/3);
}