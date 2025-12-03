#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    if(n>1 && n%2 != 0){
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n; j++){
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
        for(int i = 0; i<n - (n/2+1); i++){
            cout<<"  ";
        }
        for(int i = 0; i<n-1; i++){
            cout<<"  ";
        }
        for(int i = 0; i<=n+1; i++){
            cout<<"* ";
        }
        cout<<endl;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<<"  ";
            }
            for(int j = 0; j<n; j++){
              if(j == 1){
                cout<<"* ";
               }
               else{
                cout<<"  ";
               }
            }
            for(int j = 0; j<n; j++){
              if(j == n-3){
                cout<<"* ";
               }
               else{
                cout<<"  ";
               }
            }
            cout<<endl;
        }
        for(int i = n-2; i>0; i--){
            for(int j = 0; j<n-3; j++){
                cout<<" ";
            }
            for(int j = 0; j<n-i; j++){
                cout<<"  ";
            }
            for(int k = 0; k<2*i-1; k++){
                cout<<"* ";
            }
            for(int j = 0; j<2*n -2*i; j++){
                cout<<"  ";
            }
            for(int k = 0; k<2*i-1; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}
