#include<iostream>
using namespace std;

class sum{
    public:
    int fun(int n){
        if(n == 0){
            return 0;
        }
        else{
            return n%10+fun(n/10);
        }
    }
};

int main(){
    int n;
    cin>>n;
    sum obj;
    cout<<"SUM  = "<<obj.fun(n);
}