// Kadane's Algorithm
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {1, 4, 2,6,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        sum = sum+a[i];
        maxSum = max(sum, maxSum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<maxSum<<endl;
}