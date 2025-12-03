#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {1, 3, 2, 5, 7, 6, 9, 8, 10};
    int n = sizeof(a)/sizeof(a[0]);

    int maxle = INT_MIN;
    for(int i = 0; i<n; i++){
        if(a[i] > maxle){
            maxle = a[i];
        }
    }

    int total = maxle* (maxle+1)/2;

    int sum = 0;

    for(int i = 0; i<n; i++){
        sum = sum+a[i];
    }

    cout<< total -sum;

}