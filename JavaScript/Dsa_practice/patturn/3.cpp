#include <iostream>
using namespace std;

class hurt{
    public:
    void fun(int n){
        for(int i = 0; i<=n; i++){
            for(int j = 0; j<=n-i; j++){
                cout<<"  ";
            }
            for(int k = 0; k<2*i-1; k++){
                cout<<"* ";
            }
            for(int k = 0; k<2*n-2*i;k++){
                cout<<"  ";
            }
            for(int k = 0; k<2*i-1; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        // for(int i = n*2; i>=0; i--){
        //     for(int j = 0; j<n*2-i; j++){
        //         cout<<"  ";
        //     }
        //     for(int k = 0; k<2*i-1; k++){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }
    }
};

int main(){
    int n;
    cin>>n;
    hurt obj;
    obj.fun(n);
}