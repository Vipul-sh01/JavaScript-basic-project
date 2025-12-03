#include<iostream>
#include<climits>
#include<vector>



// User function Template for C++
class Solution {
  public:
   
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
    int maxEndingHere = arr[0]; 
    int maxSoFar = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
    }
};
using namespace std;







class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
       int n = arr.size();
       int sum = 0;
       int maxSum = INT_MIN;
       for(int i = 0; i<n; i++){
        sum = sum+arr[i];
        maxSum = max(sum, maxSum);
        if(sum<0){
            sum = 0;
        }
       }
       return maxSum;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    Solution obj;
    cout<<obj.maxSubarraySum(a);
}