#include <iostream>
using namespace std;

int fun(int n) {
    if (n == 0) {
        return 0;
    } else {
        cout << n << " ";
        return fun(n - 1);
    }
}

int main() {
    int x = 10;
    cout << "count "; fun(x);
    return 0;
}
