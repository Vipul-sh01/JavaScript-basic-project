#include<iostream>
using namespace std;


int fun(int C){
    return (C * 9.0 / 5.0) + 32.0;
}
int main(){
    int C, f = 0;
    cin>> C;
    cout<< fun(C);
    return 0;
}