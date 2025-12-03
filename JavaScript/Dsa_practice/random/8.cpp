#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2,4,0,8,0,8,0,8,0,6,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxNunember = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>maxNunember)
        maxNunember = arr[i];
    }
    cout<<maxNunember;
}