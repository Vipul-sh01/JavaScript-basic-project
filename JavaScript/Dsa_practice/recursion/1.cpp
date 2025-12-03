#include<iostream>
using namespace std;

class count{
    public:
    int fun(int n){
        if(n<10){
            return 1;
        }
        return 1+fun(n/10);
    }
};

int main(){
    int a;
    cin>>a;
    count obj;
    cout<<obj.fun(a);
}