#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n > 1) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 2*n; j++) {
                if(j == n - 1 - i || j == n - 1 + i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Please enter a number greater than 1." << endl;
    }
    return 0;
}
