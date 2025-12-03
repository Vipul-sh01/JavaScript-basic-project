#include<iostream>
using namespace std;

class fabonacii{
    public:
    int fun(int n){
        if(n<=1){
            return n;
        }
        else{
            return fun(n - 1) + fun(n - 2);
        }
    }
};

int main(){
    int n;
    cin>> n;
    fabonacii obj;
    cout<<obj.fun(n)<<endl;
}