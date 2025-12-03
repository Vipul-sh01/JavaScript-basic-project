#include<iostream>
using namespace std;

void fun(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++)
        cout<< "  ";
        for(int k=1; k<=2*i-1; k++){
        cout<<"* ";
    }
     cout<<endl;
    }
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=n;j++){
            if(j==3){
                cout<< "e ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<< endl;
    }
    for(int i = 0 ; i<=n; i++){
        cout<<"* ";
    }
   
}
int main() {
    int a = 5;
    fun(a);
}
