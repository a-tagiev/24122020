/*#include <iostream>

using namespace std;
int a[1000000];
int main() {
    int b;
    cin>>b;
    a[1]=1;
    a[2]=1;
    for(int i=3; i<100000; i++){
        a[i]=a[i-1]+a[i-2];
    }
    if(b==1){
        cout<<2;
        return 0;
    }
    for(int i=0; i<100; i++){
        if(b==a[i]){
            cout<<i;
            return 0;
    }
    }
cout<<-1;
}*/