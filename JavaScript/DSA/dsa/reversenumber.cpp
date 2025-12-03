#include<iostream>
#include<vector>
using namespace std;

class reverse{
    public:
    void fun(int n){
        vector<int>reversenumber;
        if(n<=0){
            cout<<"Give positive number";
            return;
        }
        while(n>0){
            reversenumber.push_back(n%10);
            n = n/10;
        }
        for(int i = 0; i < reversenumber.size(); i++){
            cout<< reversenumber[i];
        }
        cout<<endl;
    }
};
int main(){
    int a;
    cin>>a;
    reverse obj;
    obj.fun(a);
    return 0;
}