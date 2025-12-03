#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;


vector<int>twoSum(vector<int>arr, int t){
    
    unordered_map<int, int>seen;
    for(int i = 0; i<arr.size(); i++){
        int b = t - arr[i];

        if(seen.find(b) != seen.end()){
            return{seen[b], i};
        }
        seen[arr[i]] = i;
    }
    return {};
}


int main(){
   int a[] = {2,7,11,15};
   int n = sizeof(a)/sizeof(a[0]);

   vector<int> (a, a+n);
}