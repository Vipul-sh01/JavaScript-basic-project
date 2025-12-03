#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int t;
    cin>>t;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j] == t){
                cout<<arr[i]<<" and "<<arr[j];
            }
        }
    }
}