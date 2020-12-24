#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
ifstream inp;
ofstream fl;

int compare(const void * x1, const void * x2)
{
    return ( *(int*)x1 - *(int*)x2 );
}
int main() {
    int n;
inp.open("input.txt", ios::in);
fl.open("output.txt", ios::out);
inp>>n;
int a[n];
for(int i=0; i<n; i++){
    inp>>a[i];
}
    qsort(a, n, sizeof (int), (int(*) (const void *, const void *)) compare);
    for(int i=0; i<n; i++){
        fl<<a[i]<<' ';
    }


}