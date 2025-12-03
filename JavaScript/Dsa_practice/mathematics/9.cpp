#include<iostream>
using namespace std;

bool fun(int n){
    int copy = n;
    int sum = 0;
    while(n!=0){
        int d = n%10;
        sum = sum+(d*d*d);
        n = n/10;
    }
    return sum == copy;
}

int main(){
    int n;
    cin>>n;
    if(fun(n)){
        cout<<"yes ";
    }
    else{
        cout<<"No ";
    }
}