#include<iostream>
using namespace std;

class sum{
    public:
    int fun(int n){
        if(n == 0){
            return 0;
        }
        int val;
        cin>>val;
        return val+fun(n-1);
    }
};

int main(){
    int n;
    cin>>n;
    sum obj;
    cout<<obj.fun(n)<<" ";
}