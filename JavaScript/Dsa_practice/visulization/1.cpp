#include<iostream>
using namespace std;

class visual{
    public:
    void fun(int n){
        for(int i = 0; i<=n; i++){
            cout<<"Outer loop: "<<i<<endl;
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cin>>n;
    visual obj;
    obj.fun(n);
}