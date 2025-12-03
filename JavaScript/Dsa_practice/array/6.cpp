#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,3,2,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        bool temp = false;
        for(int j = 0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                temp = true;
                break;
            }
        }
        if(!temp){
            cout<<"Non-reapting number is = "<< arr[i]<< endl;
        }
    }
}