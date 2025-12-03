#include<iostream>
#include<vector>
using namespace std;

class inputFromUser{
    public:
    int fun(int n){
        int i;
        vector<int> userArray;
        for(i = 0; i<=n-1; i++){
            int v;
            cin>>v;
            userArray.push_back(v);
        }
        for(i=0; i<=n-1; i++){
            cout<<userArray[i]<< " ";
        }
        cout<<endl;
    }
};

int main(){
    int a;
    cin>>a;
    inputFromUser obj;
    obj.fun(a);
    return 0;
}