#include <iostream>
using namespace std;

bool fun(unsigned int x) {
    return (!(x & (x - 1)));
}

int main() {
    // Test cases
    cout << "Is 0 a power of 2? " << (fun(0) ? "Yes" : "No") << endl;
    return 0;
}
