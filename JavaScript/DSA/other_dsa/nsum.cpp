#include<iostream>
using namespace std;

int nSum(int n){
    if(n <= 1){
        return n;
    }
    else{
        return n + nSum(n-1);
    }
}

int main(){
    int x = 2;
    cout<< nSum(x);
    return 0;
}