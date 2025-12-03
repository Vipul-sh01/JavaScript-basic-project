#include<iostream>
using namespace std;

class triple{
    public:
    int fun(int n){
        for(int i = 1; i<=n; i++){
            cout<<"Outer loop "<<i<<endl;
            for(int j = 1; j<=n; j++){
                cout<<"Iner loop"<<j<<endl;
                cout<<i<<" + "<<j<<" = "<<i+j<<endl;
                for(int k = 1; k<=n; k++){
                    cout<<"Most Inner looop "<<k<<endl;
                    cout<<i<<" + "<<j<<" + "<<k<< " = "<<i+j+k<<endl;
                }
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    triple obj;
    obj.fun(n);
}