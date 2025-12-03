#include<iostream>
using namespace std;
int fun(int a, int b, int c){
    if(a>b){
        if(a>c){
            cout<<"a";
        }
        else{
            cout<<"c";
        }
    }
    else{
        if(b>c){
            cout<<"b";
        }
        else{
            cout<<"c";
        }
    }
    
}
int main(){
    int a = 5;
    int b = 2;
    int c = 3;
    fun(a, b,c);
}