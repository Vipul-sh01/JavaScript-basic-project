#include <iostream>
using namespace std;

int fun(int n) {
     if (n==4)
     {
      return n;
     }
     else{
        return 2*fun(n+1);
     }
}

int main() {
    int x = 2;
    cout << "count "; fun(x);
    return 0;
}
