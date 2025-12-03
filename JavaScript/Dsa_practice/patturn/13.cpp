#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int k = 0; k<2*i-1; k++){
            cout<<"* ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int k = 0; k<2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = n-2; i>0; i--){
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int k = 0; k<2*i-1; k++){
            cout<<"* ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        for(int k = 0; k<2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           if(j == n-1){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        for(int k = 0; k<n-1; k++){
            cout<<"  ";
        }
        for(int j = 0; j<n; j++){
           if(j == n-1){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
}