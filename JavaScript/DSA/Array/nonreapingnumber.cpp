#include<iostream>
using namespace std;

int main(){
    int arr[] ={4, 5, 4, 6, 7, 6, 8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"size = "<< n<<endl;
    for(int i = 0; i<n; i++){
        bool temp = false;
        for(int j = 0; j<n; j++){
            if(i !=j && arr[i] == arr[j]){
               temp = true;
               break;
            }
        }
        if(temp){
            cout<<"number = "<< arr[i]<< endl;
        }
    }
}