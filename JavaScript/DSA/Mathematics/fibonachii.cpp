#include<iostream>
using namespace std;

class fibonachii{
    public:
    int fun(int n){
        if(n<=0 || n == 1){
            return 0;
        }
        int a= 0;
        int b = 1;
        int c;
        for(int i = 0; i<=n; i++){
            c = a+b;
            a = b;
            b = c;
            cout<< c<<" ";
        }
        return b;
    }
};

int main(){
     int a;
    cout << "Enter the position of Fibonacci number: ";
    cin >> a;
    fibonachii obj;
    int result = obj.fun(a);
    cout << "The " << a << "th Fibonacci number is: " << result << endl;
}