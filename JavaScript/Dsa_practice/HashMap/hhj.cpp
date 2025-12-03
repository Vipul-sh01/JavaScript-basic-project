#include<iostream>
#include<unordered_set>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int a[] = {1,1,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);

    unordered_set<int>arr;
    vector<int>unicVal;

    for(int i = 0; i<n; i++){
        if(arr.find(a[i]) == arr.end()){
            arr.insert(a[i]);
            unicVal.push_back(a[i]);
        }
    }

    for(int j = 0; j<unicVal.size(); j++){
        cout<<unicVal[j]<<" ";
    }

}