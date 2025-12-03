// check for duplicates number in an array using unordered_map

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


bool checkdulpcate(vector<int>n){
    unordered_map<int, int>arr;

    for(int val: n){
        arr[val]++;
        if(arr[val]>1){
            return true;
        }
    }
    return false;
};


int main(){
    int a[] = {1,2,3,2,3,4,3,2,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    vector<int> vec(a, a + n);
    
    int r = checkdulpcate(vec);

    if(r == 1){
        cout << "Duplicates found" << endl;
    }
    else{
         cout << "No duplicates" << endl;
    }
    
}