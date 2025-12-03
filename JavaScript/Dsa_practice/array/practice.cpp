#include<iostream>
using namespace std;

int main(){
    int a[] = {2,4,5,3,5,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    for(int str = 0; str<n; str++){
        for(int end = str; end<n; end++){
            for(int i = str; i<end; i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}