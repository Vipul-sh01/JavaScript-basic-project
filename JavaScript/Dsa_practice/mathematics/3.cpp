#include<iostream>
using namespace std;

class pollidrome{
    public:
    int fun(int n){
        int temp = n;
        int rev = 0;
        while(temp != 0){
            rev = (rev*10)+(temp%10);
            temp = temp/10;
        }
        return (rev == n);
    }
};

int main(){
    int n;
    cin>>n;
    pollidrome obj;
    int r = obj.fun(n);
    if(r == 1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}