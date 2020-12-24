#include<iostream>

using namespace std;

int g(int n, int sum = 0) {

    if (n > 0) {
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    } else {
        return 0;
    }

}

int main() {
    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    for (int i = 1; i < a; i++) {
        for (int j = i; j > 0 && g(b[j - 1]) < g(b[j]); j--) {


            swap(b[j], b[j - 1]);


        }

    }
    for (int j = 0; j < a; j++) {
        cout << b[j] << ' ';
    }
}