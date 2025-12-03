#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {7,3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);

    int count = 0;

    for(int a = 0; a<n-2; a++){
        int c = a+2;
        for(int b = a+1; b<n-1; b++){
            while(c<n&& arr[a]+arr[b]>arr[c]){
                c++;
            }
            count = count+(c-b-1);
        }
    }
    cout<<count<<" ";
}