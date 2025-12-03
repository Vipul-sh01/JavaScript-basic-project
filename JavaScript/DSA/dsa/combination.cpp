#include<iostream>
using namespace std;

class comb{
    public:
    void fun(int n){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(j>=i){
                    cout<<"1 ";
                }
                else{
                    cout<<"* ";
                }
            }
            cout<<endl;
        }
    }
};

int main(){
    int a;
    cin>>a;
    comb obj;
    obj.fun(a);
}