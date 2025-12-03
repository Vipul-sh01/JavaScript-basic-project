// final output: The program should output the total frequency of the most frequent elements in the array.

#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int a[] = {1,2,2,3,1,4};
    int n = sizeof(a)/sizeof(a[0]);

    unordered_map<int, int> arr;
    int maxFreq = 0;
    int total = 0;
    for(int Val: a){
        arr[Val]++;
       if(arr[Val]>maxFreq){
        maxFreq = arr[Val];
       }
    }

    
    for(auto val: arr){
        if(val.second == maxFreq){
            total = total + val.second;
        }
    }

    cout<<total<<" ";
}
