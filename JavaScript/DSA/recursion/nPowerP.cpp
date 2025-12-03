#include<iostream>
using namespace std;

class nPowerp{
    public:
    int fun(int n, int p){
        if(p==0){
            return 1;
        }
        else if(p>0){
            return n*fun(n, p-1);
        }
        else {
            return 1/fun(n, -p);
        }
    }
};

int main(){
    int n;
    int p;
    cin>>n;
    cin>>p;
    nPowerp obj;
    cout<<obj.fun(n,p)<<endl;
}