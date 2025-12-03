#include<iostream>
using namespace std;

class patturn{
    public:
    void fun(int n){
        int i;
        for(i = n; i>=0; i--){
            for(int j = 0; j<=n-i; j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        int m = 2*(n-i);
        for(int s = 0; s<m; s++){
            cout<< "  ";
        }
        for(int i = n; i>=0; i--){
            for(int j = 0; j<=n-i; j++){
                cout<<"* ";
            }
            cout<<"  ";
            cout<< endl;
        }
    }
};
int main(){
    int a;
    cin>>a;
    patturn obj;
    obj.fun(a);
}