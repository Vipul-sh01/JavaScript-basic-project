#include<iostream>
using namespace std;

class Palindrome {
    public:
    bool fun(int n) {
        int rev = 0;     
        int original = n; 
        while(n != 0) {
            int rem = n % 10;       
            rev = rev * 10 + rem;   
            n = n / 10;             
        }
        return (rev == original);  
    }
};

int main(){
    int n;
    cin>>n;
    Palindrome obj;
    if(obj.fun(n)){
        cout<< "yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}