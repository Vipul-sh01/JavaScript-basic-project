#include<iostream>
using namespace std;

int main(){
    int a[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(a)/sizeof(a[0]);

    int maxWater = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+ 1; j<n; j++){
            int w = j-i;
            int h = min(a[i], a[j]);
            int a = w*h;
            maxWater = max(a, maxWater);
        }
    }
    cout<<maxWater;
}