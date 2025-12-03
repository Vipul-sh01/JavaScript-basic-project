#include<iostream>
using namespace std;

class oddeven{
    public:
    int fun(int n){
        if(n%2 ==0){
            cout<<"even number";
        }
        else{
            cout<< "odd number";
        }
    }
};
int main(){
    int a;
    cin>>a;
    oddeven obj;
    obj.fun(a);
    return 0;
}