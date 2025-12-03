#include<iostream>
using namespace std;

class reverse{
    public:
    int fun(int n){
        if(n<0){
            return 0;
        }
        int rev = 0;
        int rem;
        while(n != 0 ){
            rem = n%10;
            rev = rev*10+rem;
            n = n/10;
        }
        return rev;
    }
};

int main(){
    int n;
    cin>>n;
    reverse obj;
    cout<<obj.fun(n);
}