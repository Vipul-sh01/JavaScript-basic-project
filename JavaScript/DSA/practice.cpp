#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    for(int i = 0; i<= a; i++){
        char c = 'A';
        c = c+i;
        for(int j = 0; j<=i; j++){
            cout<<c <<" ";
            c = c+i;
        }
        cout<<endl;
    }
}