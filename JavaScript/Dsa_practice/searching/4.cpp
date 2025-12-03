#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,4,5,2,5,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int t;
    cin>>t;

    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        
        if(arr[mid] == t){
            cout<<mid<<" ";
            return 0;
        }
        if(arr[mid]<t){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return 0;
}