#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, -3};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int maxSum = INT_MIN;
    for(int str = 0; str<n; str++){
        int sum  = 0;
        for(int end = str; end<n; end++){
            sum = sum+arr[end];
            maxSum = max(sum, maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}