#include<iostream>
using namespace std;

class patturn{
    public:
    void fun(int n){
        for(int i = n; i>=0; i--){
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            for(int k = 0; k<2*n-2*i; k++){
                cout<<"  ";
            }
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = 1; i<=n; i++){
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            for(int k = 0; k<2*n-2*i; k++){
                cout<<"  ";
            }
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int a;
    cin>>a;
    patturn obj;
    obj.fun(a);
}