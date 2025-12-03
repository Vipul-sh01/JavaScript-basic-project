#include<iostream>
#include<vector>
using namespace std;

class selection{
    public:
    void sort(vector<int>&a){
        int n = a.size();
        for(int i = 0; i< n; i++){
            for(int j = i+1; j<n; j++){
                if(a[j]<a[i]){
                    swap(a[i], a[j]);
                }
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    selection obj;
    obj.sort(a);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}