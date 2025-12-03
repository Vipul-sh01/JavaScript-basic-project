#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,5,5,5,0,0,2,3,5,6,0,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            arr[k] = arr[i];
            k++;
        }
    }
    while(k<n){
        arr[k] = 0;
        k++;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}