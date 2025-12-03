#include<iostream>
#include<vector>
using namespace std;

int main(){
     int n;
     cin>>n;
    vector<int>userArr(n);
     for (int i = 0; i < n; i++)
     {
        cin>>userArr[i];
     }
     int t;
     cin>>t;
     userArr.push_back(t);

     for (int i = 0; i < n; i++)
     {
        cout<<userArr[i]<<" ";
     }
}

