#include<iostream>
using namespace std;

class sumofdigit{
    public:
    // int fun(int n){
    //     int sum = 0;
    //     int rem;
    //     while(n!=0){
    //         rem = n %10;
    //         sum = sum + rem;
    //         n = n/10;
    //     }
    //     cout<<sum<<endl;
    // }

    // using recursion

    int fun(int n){
        if(n==0){
            return 0;
        }
        return (n%10 + fun(n/10));
    }
};

int main(){
    int n;
    cin>>n;
    sumofdigit obj;
    cout<<obj.fun(n);
}