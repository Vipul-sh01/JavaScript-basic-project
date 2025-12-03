#include<iostream>
using namespace std;

int main(){
    int a;
    int f=1;
    cin>>a;
    if(a<=0){
        return 1;
    }
    for(int i = 2; i<=a; i++){
        f = f*i;
    }
    cout<<f;
    return 0;
}