#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int d = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i-1; j++) {

            if (a[j] > a[j+1]) {
                swap(a[j], a[j + 1]);
                for (int k = 0; k<n;k++){
                    cout << a[k]<<" ";

                }
                cout <<endl;d++;
            }
            /*for (int k = 0; k < n-i; k++) {
                    if(a[j]<=a[j+1]) {
                        cout << a[k] << " ";
                    }
            }
            for (int k = 0; k<n;k++){
                cout << a[k]<<" ";

            }
            cout<<endl;*/
            bool b = true;
            for (int k = 1; k<n;k++){
                if (a[k]<a[k-1]){b= false;}
            }
            if (b) {
                if (d==0){cout<<0;}
                return 0;}
        }

    }


}