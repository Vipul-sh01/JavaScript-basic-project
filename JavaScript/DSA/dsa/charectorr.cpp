#include<iostream>
using namespace std;

class chart{
    public:
    char fun(int n){
        char a = 'A';
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<< a<<" ";
                a = a+1;
            }
            cout<< endl;
        }
    }
};

int main(){
    int a;
    cin>>a;
    chart obj;
    obj.fun(a);
}