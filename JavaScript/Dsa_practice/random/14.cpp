#include<iostream>
using namespace std;

class sum{
    public:
    int fun(int a, int b){
    int c = a+b;
    return c;
  }
};

int main(){
    int a,b;
    sum obj;
    cout<<obj.fun(4, 5);
    cout<<endl;
    cout<<obj.fun(5, 2);
}