#include<iostream>
#include<vector>
using namespace std;

class array{
    public:
    int i, j;
    int fun(int n){
        vector<int>arrayprint;
        for(i = 0; i<=n; i++){
            arrayprint.push_back(i);
        }
        for(i=0; i<=n; i++){
            cout<< arrayprint[i]<<" ";
        }
    }
};
int main(){
    int a;
    cin>> a;
    array obj;
    obj.fun(a);
    return 0;
}