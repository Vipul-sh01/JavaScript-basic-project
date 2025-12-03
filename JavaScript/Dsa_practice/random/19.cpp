// Remove all zeros from an array.

#include <iostream>
using namespace std;

int main(){
    int a[] = {0,0,2,4,0,6,0,8};
    int n = sizeof(a)/sizeof(a[0]);
    
    int k = 0;
    for(int i = 0; i<n; i++){
        if(a[i]!=0){
            a[k++] = a[i];
        }
    }

    for(int i = 0; i<k; i++){
        cout<<a[i]<<" ";
    }
}

