#include<iostream>
using namespace std;

void fun(int n) {
    for(int i = n-1; i > 0; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++) {
            cout << "* ";
        }
        for(int m = 1; m <= 2*(n-i); m++) {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int a;
    cin >> a;
    fun(a);
    return 0;
}
