#include<iostream>
#include<vector>

using namespace std;

class singleNumber{
    public:
    int fun(vector<int>&nums){
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n; 
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    singleNumber obj;
    cout<<obj.fun(nums);
    return 0;
}