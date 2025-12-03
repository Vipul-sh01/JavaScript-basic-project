#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class majority{
    public:
    int fun(vector<int>&a){
        int n = a.size();
        sort(a.begin(), a.end());
        int f = 1;
        int ans = a[0];
        for(int i = 0; i<n; i++){
            if(a[i] == a[i-1]){
                f++;
            }
            else{
                f = 1;
                ans = a[i];
            }
            if(f>n/2){
                return ans;
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

    majority obj;
    int r = obj.fun(a);
    if(r != -1){
        cout<<"majority element is"<<r<< endl;
    }
    else{
        cout<<"No any majority there.";
    }
}