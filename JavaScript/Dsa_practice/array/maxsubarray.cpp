#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int fun(vector<int>&a){
    int n = a.size();
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        int sun = 0;
        for(int j = i; j<n; j++){
            sun = sun+a[j];
            maxSum = max(sun, maxSum);
        }
    }
    return maxSum;
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<fun(a);
}

