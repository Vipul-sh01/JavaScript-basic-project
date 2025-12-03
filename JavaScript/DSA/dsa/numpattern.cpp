#include<iostream>
using namespace std;
void fun(int n){
    int c = 1;
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            cout<< c<< " ";
            c++;
        }
        cout<< endl;
    }
}
int main(){
    int a = 5;
    fun(a);
    return 0;
}