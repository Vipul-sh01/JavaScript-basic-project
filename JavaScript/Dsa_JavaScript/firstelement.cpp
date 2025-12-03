#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int a[] = {1,2,1,2,3};
    int n = sizeof(a)/sizeof(a[0]);

    unordered_set<int>arr;

    for(int i = 0; i<n; i++){
        if(arr.find(a[i]) != arr.end()){
            cout<<a[i];
            return 0;
        }
        arr.insert(a[i]);
    }
    cout<<"No duplicate Element";
    return 0;
}