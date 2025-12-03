#include<iostream>
using namespace std;

class tables{
    public:
    int fun(int n){
        for(int i = 1; i<=n; i++){
            cout<<"Tables of = "<<i<<endl;
            for(int j = 1; j<=10; j++){
                cout<<i<<" * "<<j<<" = "<<i*j<<endl;
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    tables obj;
    obj.fun(n);
}