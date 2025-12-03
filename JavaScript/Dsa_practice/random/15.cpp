#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int MaxSum = INT_MIN;

    for(int i = 0; i<n; i++){
        sum = sum+arr[i];
        MaxSum = max(sum, MaxSum);

        if(sum<0){
            sum = 0;
        }
    }
    cout<<MaxSum;
    return 0;
}