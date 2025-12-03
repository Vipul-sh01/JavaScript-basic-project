#include <iostream>
using namespace std;

unsigned int foo(unsigned int n, unsigned int r) {
    if (n > 0) {
        return (n % r + foo(n / r, r));
    } else {
        return 0;
    }
}

int main() {
    unsigned int x = 513;
    unsigned int r = 2;
    unsigned int result = foo(x, r); 
    cout << "Result: " << result << endl;  // Print the result
    cout << "End of recursion" << endl;
    return 0;
}
