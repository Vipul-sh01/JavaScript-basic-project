#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {2,3,4,2,1,2,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    int maxNumber = INT_MIN;
    for(int i = 0; i<n; i++){
        if(a[i]>maxNumber){
            maxNumber = a[i];
        }
    }
    cout<<maxNumber<<" ";
}