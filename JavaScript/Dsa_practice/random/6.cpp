#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 3, 2, 4, 2, 3, 2, 4};
    int n = sizeof(a)/sizeof(a[0]);

    int f = 0;
    int ans = 0;
    for(int i =0; i<n; i++){
        if(f == 0){
            ans = a[i];
        }
        if(ans == a[i]){
            f++;
        }
        else{
            f--;
        }
    }
    cout<<ans;
}