#include<iostream>
using namespace std;

class testPrime{
    public:
    bool fun(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    int n;
    cin>>n; 
    testPrime obj;
    int r = obj.fun(n);
    if(r == 1){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
}