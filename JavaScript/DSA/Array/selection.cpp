#include<iostream>
#include<vector>
using namespace std;

class array{
    public:
    vector<int>userArr;
    int fun(int n){
        int value;
        for(int i = 0; i<n; i++){
            cin>> value;
            userArr.push_back(value);
        }
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(userArr[j] <= userArr[i]) {
                    int temp = userArr[j];
                    userArr[j] = userArr[i];
                    userArr[i] = temp;
                }
            }
        }
        for(int i= 0; i<n; i++){
            cout<<userArr[i]<< " ";
        }
    }
};
int main(){
    int n;
    cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     // cin>>a[i];
    // }
    // for(int i =0; i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    array obj;
    obj.fun(n);
}