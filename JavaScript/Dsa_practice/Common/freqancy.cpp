// find the frequency of each element in an array using unordered_map.

#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int a[] = {1,2,3,2,3,4,3,2,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_map<int, int> arr;

    for(int i = 0; i<n; i++){
        arr[a[i]]++;
    }

    for(auto val : arr){
       cout<<val.first<<" -> "<<val.second<<endl;
    }
}