#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>1 && n%2 !=0){
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
            for(int j = 0; j<i-1; j++){
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
            for(int j = 0; j<i-1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}