#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 1 && n % 2 != 0) {
        for(int i = 0; i<n; i++){
            cout<<endl;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << "  ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << "  ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    } else {
        cout << "Please enter an odd number greater than 1." << endl;
    }

    return 0;
}
