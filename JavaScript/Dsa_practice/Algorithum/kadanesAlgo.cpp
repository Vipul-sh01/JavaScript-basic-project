// Kadane's Algorithm to find the maxmium sum of subarray
//


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {2, 3, -8, 7, -1, 2, 3};
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
    cout<<maxSum;
    return 0;
}