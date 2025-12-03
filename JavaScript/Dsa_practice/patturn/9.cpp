#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=5 && n%2 != 0){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                cout<<"  ";
            }
            for(int k = 0; k<i-1; k++){
                cout<<"* ";
            }
            for(int a = 0; a<n+2; a++){
                if(i == n-1){
                    cout<<"e ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int s = 0; s<i-1; s++){
                if(s == 0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        for(int i = n-2; i>0; i--){
            for(int j = 0; j<n-i-1; j++){
                cout<<"  ";
            }
            for(int k = 0; k<i-1; k++){
                cout<<"* ";
            }
            for(int a = 0; a<n+2; a++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int s = 0; s<i-1; s++){
                if(s == 0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    else if(n == 3){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                cout<<"  ";
            }
            for(int k = 0; k<i; k++){
                cout<<"* ";
            }
            for(int a = 0; a<n+2; a++){
                if(i == n-1){
                    cout<<"e ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int s = 0; s<i; s++){
                if(s == 0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
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
            for(int a = 0; a<n+2; a++){
                if(i == n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int s = 0; s<i; s++){
                if(s == 0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout << "Please enter an odd number" << endl;
    }
}