#include<iostream>
using namespace std;

int main(){
    int a[] = {4,1,2,1,2};
    int n = sizeof(a)/sizeof(a[0]);

    int anw = 0;
    for(int i = 0; i<n; i++){
        anw = anw ^ a[i];
    }
    cout<<anw;
}