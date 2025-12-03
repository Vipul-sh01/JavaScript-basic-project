#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>1 && n%2 != 0){
        for(int i = 0; i<n; i++){
            cout<<"* ";
            int s;
            if(i <= n/2){
                s = n/2-i;
            }
            else{
                s = i-n/2;
            }
            for(int j = 0; j<s; j++){
                cout<<"  ";
            }
             cout << "*\n";
        }

        // int e = n-2;
        // for(int i = 0; i<e; i++){
        //     int s = (n + i) - n/2;
        //     for(int j = 0; j<=s; j++){
        //         cout<<"! ";
        //     }
        //      cout << "*\n";
        // }
    }
}