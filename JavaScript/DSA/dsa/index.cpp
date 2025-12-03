#include<iostream>
using namespace std;

void fun(int n, int shift) {
    if (n > 1 && n % 2 != 0) {
        // Upper part
        for (int i = 1; i <= n - 2; i++) {
            // Adding spaces to shift the pattern
            for (int s = 0; s < shift; s++) {
                cout << " ";
            }
            for (int j = 0; j <= n - i - 1; j++) {
                cout << "  ";
            }
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << "* ";
            }
            cout << endl;
        }

        // Middle line with 'e'
        for (int i = 0; i < n; i++) {
            // Adding spaces to shift the pattern
            for (int s = 0; s < shift; s++) {
                cout << " ";
            }
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    cout << "e ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        // Lower part
        for (int i = 0; i < n / 2 + 1; i++) {
            // Adding spaces to shift the pattern
            for (int s = 0; s < shift; s++) {
                cout << " ";
            }
            cout << " ";
        }
        for (int i = 0; i <= n + 1; i++) {
            cout << "* ";
        }
        cout << endl;

        for (int i = 0; i < n + 1; i++) {
            // Adding spaces to shift the pattern
            for (int s = 0; s < shift; s++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * n - 1; j++) {
                cout << " ";
            }
            cout << "e";
            for (int j = 0; j < 2 * n - 3; j++) {
                cout << "  ";
            }
            cout << "e" << endl;
        }

        // Bottom part with asterisks
        for (int i = n; i > 0; i--) {
            // Adding spaces to shift the pattern
            for (int s = 0; s < shift; s++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << " *";
            }
            int space = 2 * n - 2 * i;
            for (int k = 0; k <= space; k++) {
                cout << "  ";
            }
            for (int j = 0; j < i; j++) {
                cout << " * ";
            }
            cout << endl;
        }
    } else {
        cout << "Input must be an odd number greater than 1." << endl;
    }
}

int main() {
    int n, shift;
    cout << "Enter an odd number greater than 1: ";
    cin >> n;
    cout << "Enter the number of spaces to right shift the pattern: ";
    cin >> shift;
    fun(n, shift);
    return 0;
}
