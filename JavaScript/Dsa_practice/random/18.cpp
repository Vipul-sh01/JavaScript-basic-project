#include <iostream>
using namespace std;

int fac(int n){
    if(n<=0){
        return 1;
    }
    return n*fac(n-1);
}

int coutdigit(int a){
    int c = 0;
    while(a!=0){
        a = a/10;
        c++;
    }
    cout<<c;
}

int main(){
    int n;
    cin>>n;
    int count = fac(n);
    coutdigit(count);
}