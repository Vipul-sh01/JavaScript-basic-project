#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){
    int a[] = {1,1,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);

    int k = 0;

    for(int i = 0; i<n; i++){
        bool isd = false;
        for(int j = i+1; j<n; j++){
            if(a[j] == a[i]){
                isd = true;
            }
        }
        if(!isd){
            a[k++] = a[i];
        }
    }

     for(int j = 0; j < k; j++){
        cout << a[j] << " ";
    }

    return 0;

}