#include<iostream>
#include<vector>
using namespace std;

class binearySearch{
    public:
    int fun(vector<int>&a, int s, int e, int x){
        while(s<=e){
            int mid = s + (e-s)/2;
            if(a[mid] == x){
                return mid;
            }
            else if (a[mid]<x){
                s = mid +1;
            }
            else{
                e = mid - 1;
            }
        }
        return -1;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter target: ";
    cin>>x;

    binearySearch obj;
    int r = obj.fun(a, 0, n-1, x);
    if(r != -1){
        cout<<"YES: "<<a[r];
    }
    else{
        cout<<"NO: ";
    }
}