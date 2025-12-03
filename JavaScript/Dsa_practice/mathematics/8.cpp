#include<iostream>
using namespace std;

int main(){
    int x, p;
    cin>>x;
    cin>>p;
    int r = 1;
    for(int i = 0; i<=p; i++){
        r = x*p;
    }
    cout<<r<<endl;
}