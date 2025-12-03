// moorey voting algo
#include<iostream>
#include<vector>

using namespace std;


class majority{
    public:
    int fun(vector<int>&a){
        int n = a.size();
        int f = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(f == 0){
                ans = a[i];
            }
            if(ans == a[i]){
                f++;
            }
            else{
                f--;
            }
        }
        return ans;
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
    if(r != 0){
        cout<<"Mojority Element"<<r<<endl;
    }
    else{
        cout<<"Not Majority there";
    }
}