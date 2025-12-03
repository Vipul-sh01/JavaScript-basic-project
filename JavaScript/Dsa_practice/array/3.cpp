#include<iostream>
#include<vector>
#include<climits>

using namespace std;

class maxmumElement{
    public:
    int fun(vector<int>&a){
        int max = INT_MIN;
        int n = a.size();
        for(int i = 0; i<n; i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        return max;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    maxmumElement obj;
    cout<<"MAX = "<<obj.fun(a);
}