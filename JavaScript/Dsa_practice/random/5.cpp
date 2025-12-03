#include<iostream>
using namespace std;

int main(){
    int a[] = {2,4,0,8,0,8,0,8,0,6,0,1};
    int n = sizeof(a)/sizeof(a[0]);

    int non = 0;
    for(int i = 0; i<n; i++){
        if(a[i] != 0){
            a[non++] = a[i];
        }
    }
    while(non<n){
        a[non++] = 0;
    }

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}