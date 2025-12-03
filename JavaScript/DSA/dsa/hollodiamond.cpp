#include<iostream>
using namespace std;

class Hollo {
    public:
    void fun(int n) {
        cout << "* " << endl;
        for(int i = 1; i < n - 1; i++) {
            cout << "* "; 
            
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << "  "; 
            }
            
            cout << "* " << endl;  
        }
        if (n > 1) {
            for (int i = 0; i < 2 * n - 1; i++) {
                cout << "* "; 
            }
            cout << endl;
        }
    }
};

int main() {
    int a;
    cout << "Enter the number of rows: ";
    cin >> a;
    
    Hollo obj;
    obj.fun(a);

    return 0;
}
