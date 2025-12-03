#include<iostream>
using namespace std;

int main(){
    int a[] = {4,5,2,5,2,5,3,6};
    int n = sizeof(a)/sizeof(a[0]);

    for(int st = 0; st<n; st++){
        for(int end = st; end<n; end++){
            for(int i = st; i<end; i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}