#include<iostream>
using namespace std;

class Prime {
    public:
    void fun(int n, int m) {
        for(int i = n; i <= m; i++) {
            if (i < 2) continue; 
            bool isPrime = true;
            for(int j = 2; j <= i / 2; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) {
                cout << i << " ";
            }
        }
    }
};
int main(){
    int a, b;
    cin>>a>>b;
    Prime obj;
    obj.fun(a,b);

}