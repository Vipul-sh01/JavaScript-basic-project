// This code finds the frequency of each element in an array and prints the total frequency of the most frequent elements.


#include<iostream>
using namespace std;


int main(){
    int a[] = {1,2,3,2,1,4};
    int n = sizeof(a)/sizeof(a[0]);

   int maxVal = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > maxVal) maxVal = a[i];
    }
    int f[maxVal + 1] = {0};

    for(int i = 0; i<n; i++){
        f[a[i]]++;
    }
    int maxf = 0;

    for(int k = 0; k< maxVal; k++){
        if(f[k]> maxf){
            maxf = f[k];
        }
    }

    int total = 0;
    for(int k = 0; k< maxVal; k++){
        if(f[k] ==  maxf){
            total = total+maxf;
        }
    }

    cout<<total;
}