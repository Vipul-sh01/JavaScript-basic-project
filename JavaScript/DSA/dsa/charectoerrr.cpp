#include<iostream>
using namespace std;

class chart{
    public:
    char fun(int n){
        // char a = 'A';
        for(int i = 0; i<n; i++){
            char a = 'A';
            a = a+i;
            for(int j = 0; j <= i; j++){
                cout<< a<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int a;
    cin>>a;
    chart obj;
    obj.fun(a);
}