#include<iostream>
#include<vector>
using namespace std;

class select{
    public:
    void selectionSort(vector<int>&a){
        int n = a.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(a[j]<a[i]){
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
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
    select obj;
    obj.selectionSort(a);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}