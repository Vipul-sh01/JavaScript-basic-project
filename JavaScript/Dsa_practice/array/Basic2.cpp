#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {2, 4, 3, 5, 6, 3};
    int n = a.size();
    cout<<"Old Array = ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int newElement;
    cin>>newElement;
    a.push_back(newElement);
    int m = a.size();
    cout<<"New Array = ";
    for(int i =0 ; i<m; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}