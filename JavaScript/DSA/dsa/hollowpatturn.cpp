#include<iostream>
using namespace std;

class HolloDiamond {
    public:
    void printHollowDiamond(int n) {
        int i, j;
        for(i = 1; i <= n; i++) {
            for(j = i; j < n; j++) {
                cout << "* ";
            }
            cout << "  "; 
            if(i > 1) {
                for(j = 1; j < 2 * (i - 1); j++) {
                    cout << "* "; 
                }
                cout << "  "; 
            }
            cout << endl;
        }
        for(i = n - 1; i >= 1; i--) {
            for(j = n; j > i; j--) {
                cout << "* ";
            }
            cout << "  ";
            if(i > 1) {
                for(j = 1; j < 2 * (i - 1); j++) {
                    cout << "* "; 
                }
                cout << "  ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cin >> rows;
    
    HolloDiamond obj;
    obj.printHollowDiamond(rows);
    
    return 0;
}
