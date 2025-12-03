#include<iostream>
#include<vector>
using namespace std;

class linearSearch{
    public:
    bool fun(vector<int>&a, int t){
        int n = a.size();
        for(int i = 0; i<n; i++){
            if(a[i]==t){
                cout<<"target = "<<i<<endl;
                return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int t;
    cout<<"enter target: ";
    cin>>t;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    linearSearch obj;
    int resutl = obj.fun(a, t);
    if(resutl == 1){
        cout<<"yes"<<" ";
    }
    else{
        cout<<"no"<<" ";
    }
}