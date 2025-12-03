#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/ sizeof(a[0]);

    for(int i = 0; i<n; i++){
        if(i == 3){
            a[i] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;

}