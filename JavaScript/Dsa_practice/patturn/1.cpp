#include<iostream>
using namespace std;

class patturn{
    public:
    void fun(int n){
        for(int i = 0; i<=n; i++){
            for(int i = 0; i<=n-1; i++){
                cout<<"1 ";
            }
            for(int j = 0; j<=n-i; j++){
                cout<<"  ";
            }
            for(int k = 0; k<2*i-1; k++){
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