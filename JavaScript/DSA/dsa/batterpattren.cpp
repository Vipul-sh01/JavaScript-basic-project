#include<iostream>
using namespace std;
void fun(int n){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        int s = 2*n-2*i;
         for(int k = 0; k<=s; k++){
            cout << "  ";
       }
       for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i>=0; i--){
        for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        int s = 2*n-2*i;
         for(int k = 0; k<=s; k++){
            cout << "  ";
       }
       for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int a = 5;
    fun(a);
    return 0;
}