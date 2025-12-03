#include<iostream> 
#include<unordered_map>
using namespace std;

int main(){
    int a[] = {3,3,4,5,4,6,7};
    int n = sizeof(a)/sizeof(a[0]);

    unordered_map<int, int>arr;
    for(int i = 0; i<n; i++){
        arr[a[i]]++;
    }

    for(auto val: arr){
        if(val.second == 1){
            cout<<val.first<<"  "<<endl;
        }
    }
}