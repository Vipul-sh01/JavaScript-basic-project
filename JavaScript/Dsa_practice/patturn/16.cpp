#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 1 && n % 2 != 0) {
        int mid = n / 2 + 1;

        for (int i = 0; i <= n + 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (i == n + 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << "e ";
            if (i == 0 || i == mid) {
                int starCount = (i == mid) ? n  : n+2;
                for (int j = 0; j < starCount; j++) {
                    cout << "* ";
                }
            } else {
                cout<<"  ";
            }
            cout << endl;
        }
    } else {
        cout << "Error" << endl;
    }

    return 0;
}
