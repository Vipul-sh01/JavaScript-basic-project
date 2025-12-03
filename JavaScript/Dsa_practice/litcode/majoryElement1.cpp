//brute froce approuch
#include<iostream>
#include<vector>
using namespace std;

class majority{
    public:
    int fun(vector<int>&a){
        int n = a.size();
        for(int i = 0; i<n; i++){
            int c = 0;
            for(int j = 0; j<n; j++){
                if(a[j] == a[i]){
                   c++;
                }
            }
            if(c > n/2){
                return a[i];
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
        cout << "Majority element: " << r << endl;
    }
    else{
         cout << "No majority element found." << endl;
    }
}