#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
         for(int s = 0; s<n; s++){
            if(i+s == n-1 || i == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
                
            }
        }
        for(int s = 0; s<n; s++){
            if(i == n-1 || i == 0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        
        for(int s = 0; s<n; s++){
            if(i+s == n-1 || i == 0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
                
            }
        }

        for(int s = 0; s<n; s++){
            if(s == i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
                
            }
        }
        cout<<endl;
    }
    for(int i = n-2; i>0; i--){
        for(int s = 0; s<n; s++){
            if(s == 0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int s = 0; s<n; s++){
            if(i == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int s = 0; s<n; s++){
            if(s == 0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int s = 0; s<n; s++){
            if(s == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}