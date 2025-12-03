#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int l = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>l){
            l = arr[i];
        }
    }

   int total = l*(l+1)/2;
   int sum = 0;
   for(int i = 0; i<n; i++){
    sum = sum+arr[i];
   }

   cout<<total-sum<<endl;
}