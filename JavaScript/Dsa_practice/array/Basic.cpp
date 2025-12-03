#include<iostream>
using namespace std;

int main(){
    int a[19] = {2,4,3,5,6,3};
    int n = 6;
    cout<<"old Array";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int newElement;
    cin>>newElement;
    a[n] = newElement;
    n++;
    cout<<"New Array";
    for(int i = 0; i<n; i++){
        cout<< a[i]<<" ";
    }
    return 0;
}