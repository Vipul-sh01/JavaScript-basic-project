#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>1 && n%2 != 0){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<<"  ";
            }
            for(int k = 0; k<n; k++){
                cout<<"  ";
            }
            for(int k = 0; k<n; k++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int k = 0; k<n; k++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int j = 0; j<i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = n-2; i>0; i--){
            for(int j = 0; j<n; j++){
                cout<<"  ";
            }
            for(int k = 0; k<n; k++){
                cout<<"  ";
            }
            for(int k = 0; k<n; k++){
                cout<<"* ";
            }
            for(int k = 0; k<n; k++){
               cout<<"  ";
            }
            for(int j = 0; j<i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                cout<<"  ";
            }
            for(int k = 0; k<i; k++){
                cout<<"* ";
            }
            for(int a = 0; a<n+1; a++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int s = 0; s<n; s++){
                cout<<"* ";
            }
            for(int a = 0; a<n; a++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int j = 0; j<i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = n-2; i>0; i--){
            for(int j = 0; j<n-i-1; j++){
                cout<<"  ";
            }
            for(int k = 0; k<i; k++){
                cout<<"* ";
            }
            for(int a = 0; a<n+1; a++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int a = 0; a<n; a++){
               cout<<"  ";
            }
            for(int a = 0; a<n; a++){
               cout<<"  ";
            }
            for(int j = 0; j<i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}