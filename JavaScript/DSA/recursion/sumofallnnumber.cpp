#include<iostream>
using namespace std;

class sumall{
    public:
    int fun(int n){
        if(n==0){
            return 0;
        }
        return n+ fun(n-1);
    }
};

int main(){
    int n;
    cin>>n;
    sumall obj;
    cout<<obj.fun(n)<<endl;
}