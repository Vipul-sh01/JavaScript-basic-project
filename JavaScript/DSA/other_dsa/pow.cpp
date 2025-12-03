#include<iostream>
using namespace std;

class pow{
    public:
    int fun(int n){
        int r = 1;
        for(int i = 1; i<=n; i++){
            r = r*2;
            cout<< r; 
        }
    }
};

int main(){
    int a =2;
    pow obj;
    obj.fun(a);
}