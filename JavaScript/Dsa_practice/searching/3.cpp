#include<iostream>
using namespace std;

int main(){
    int a[] = {2,3,4,3,5,3,5,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    int t;
    cin>>t;
    for(int i = 0; i<n; i++){
        if(a[i] == t){
            cout<<a[i];
        }
    }
}