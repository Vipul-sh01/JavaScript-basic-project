#include<iostream>
using namespace std;

class factorial{
    public:
    long long fun(int n){
        long long f = 1;
        if(n<=0){
            return 1;
        }
        for(int i = 1; i<=n; i++){
            f = f*i;
        }
        return f;
    }
};

int main(){
    int a;
    cin>>a;
    factorial obj;
    cout<< obj.fun(a);
}