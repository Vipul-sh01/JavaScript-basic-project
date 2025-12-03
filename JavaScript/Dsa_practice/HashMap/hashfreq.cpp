// find and print the frequency of each element in an array, but only if the frequency is greater than 1.

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,2,3,4,4,4,4,4,4,5,5,5,2,3};
    int n = sizeof(a)/sizeof(a[0]);

    
    for(int i = 0; i<n; i++){
        bool count = false;
        for(int k = 0; k<i; k++){
            if(a[i] == a[k]){
               count = true;
            }
        }

        if(!count){
            int c = 1;
          for(int j = i+1; j<n; j++){
            if(a[i] == a[j]){
                c++;
            }
          }

          if(c>1){
            cout<<a[i]<<" ";
          }
        }
    }
}