#include<iostream>
using namespace std;

class temp{
    public:
    int fun(int C){
        return (C * 9.0 / 5.0) + 32.0;
    }
};

int main(){
    int a;
    cin>>a;
    temp obj;
    obj.fun(a);
    cout<< obj.fun(a)<< endl;
}