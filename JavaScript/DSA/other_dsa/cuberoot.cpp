#include<iostream>
using namespace std;

class cube{
    public:
    int fun(int n){
        static int x;
        if(n>0){
            x++;
            return fun(n-1)+ x*x;
        }
       return 0;
    }
};

int main(){
    int a;
    cin>>a;
    cube obj;
    cout<<obj.fun(a);
}