#include<iostream>
using namespace std;

class reverse{
    public:
    int revrse(int n){
        int rev = 0;
        int rem;
        while(n != 0){
            rem = n%10;
            rev = rev*10+rem;
            n = n/10;
        }
        cout<< rev;
    }
};

int main(){
    int a;
    cin>>a;
    reverse obj;
    obj.revrse(a);
}