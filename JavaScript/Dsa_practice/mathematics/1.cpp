// this code is
#include<iostream>
using namespace std;

class count{
    public:
    // int fun(int n){
    //     int c = 0;
    //     while(n!= 0){
    //         n = n/10;
    //         c++;
    //     }
    //     return c;
    // }
    int fun(int n){
        if(n < 10){
            return 1;
        }
        return 1+ fun(n/10);
    }
};
int main(){
    int n;
    cin>>n;
    count obj;
    cout<<obj.fun(n);
}