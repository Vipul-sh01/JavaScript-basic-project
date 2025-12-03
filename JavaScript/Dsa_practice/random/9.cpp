#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int f = INT_MIN;
    int s = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>f){
            s = f;
            f = arr[i];
        }
        else if(arr[i]>s && arr[i] != f){
            s = arr[i];
        }
    }

    cout<<s;
}