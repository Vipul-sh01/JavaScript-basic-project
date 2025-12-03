#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {7,3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);

    int count = 0;

    for(int a = 0; a<n-2; a++){
        for(int b = a+1; b<n-1; b++){
            for(int c = b+1; c<n; c++){
                if(arr[a] + arr[b]>arr[c]){
                    count++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<count<<" ";
}