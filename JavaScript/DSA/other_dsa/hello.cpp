#include <iostream>
using namespace std;

int fun(int a) {
    int rev = 0; 
    while (a != 0) {
        int rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    cout << "rev= " << fun(n);
    return 0;
}
