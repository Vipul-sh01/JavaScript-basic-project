#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class maxEle{
    public:
    int fun(vector<int>&a, int n){
        if(n == 1){
            return a[0];
        }
        return max(a[n-1], fun(a, n-1));
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    maxEle obj;

    cout<<"MAX = "<<obj.fun(a,n);
}