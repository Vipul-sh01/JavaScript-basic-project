#include<iostream>
using namespace std;
long long fun(int n);

class fact{
    public:
    long long fan(int n){
        long long f = 1;
        if(n==0 && n==1){
            return 1;
        }
        else{
            for(int i = 2; i<= n; i++){
            f = f*i;
         }
         return f;
        }
    }
};

int main(){
    int a;
    cin>>a;
    fact obj;
    cout<< obj.fan(a)<<endl;
}