#include<iostream>
#include<vector>
using namespace std;

class bubble{
    public:
    void bubbleSort(vector<int>&a){
        int n = a.size();
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
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
    bubble obj;
    obj.bubbleSort(a);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}