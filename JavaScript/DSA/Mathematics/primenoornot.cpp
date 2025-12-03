#include<iostream>
using namespace std;

class prime{
    public:
    bool isprime(int n){
        if(n<1){
            return false;
        }
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0){
                return false;
            }
            else{
                return true;
            }
        }
    }
};

int main(){
    int a;
    cin>>a;
    prime obj;
   if(obj.isprime(a)) {
    cout<< " yes ";
   }
   else{
    cout<< " no ";
   }
}