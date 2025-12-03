#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,2,2,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);

    int flag = false;
    for(int i = 0; i<n; i++){
        int c = 0;
        for(int j = 0; j<n; j++){
            if(a[j] == a[i]){
                c++;
            }
        }
        if(c>n/2){
            cout<<a[i]<<" ";
            flag = true;
        }
        if(!flag){
            cout << "No majority element found" << endl;
        }
    }
    return 0;
}