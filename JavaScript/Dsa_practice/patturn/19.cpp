#include<iostream>
using namespace std;

int main(){
    int a[] = {1,0,1,0,0,0};
    int n = sizeof(a)/sizeof(a[0]);

    int k = 0;
    for(int i = 0; i<n; i++){
      if(a[i] != 1){
        a[k++] = a[i];
      }
    }

    while(k<n){
        a[k++] = 1;
      }

    for(int j = 0; j<k; j++){
        cout<<a[j]<<endl;
      }
}