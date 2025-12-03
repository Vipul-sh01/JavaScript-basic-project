#include<iostream>
#include<vector>
using namespace std;


class nonreapting{
    public:
    int fun(vector<int>&arr){
        int n = arr.size();
        for(int i = 0; i<n; i++){
            bool temp = false;
            for(int j = 0; j<n; j++){
                if(i !=j && arr[i] == arr[j]){
                    temp = true;
                    break;
                }
            }
            if(!temp){
                cout<<"Non-reapting number is = "<<arr[i]<< endl;
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n-1; i++){
        cin>>arr[i];
    }
    nonreapting obj;
    obj.fun(arr);
}