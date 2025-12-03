#include<iostream>
using namespace std;

class factorial{
    public:
    int fun(int n){
        if(n==0){
            return 1;
        }
        cout<<n<<endl;
        return n*fun(n-1);
        
    }
};

int main(){
    int n;
    cin>>n;
    factorial obj;
    cout<<obj.fun(n)<<endl;
}