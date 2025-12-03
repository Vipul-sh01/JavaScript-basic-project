// Missing number in an array where all elements are in the range 1 to n and no duplicates are present.


#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;

int main(){
    int a[] = {1,5};
    int n = sizeof(a)/sizeof(a[0]);


   unordered_map<int, bool>arr;

   int maxVal = INT_MIN;
   for(int i = 0; i<n; i++){
    arr[a[i]] = true;
    if(a[i]>maxVal){
        maxVal = a[i];
    }
   }

   for(int j = 1; j<maxVal; j++){
    if(!arr[j]){
        cout<<j<<" ";
    }
   }
}