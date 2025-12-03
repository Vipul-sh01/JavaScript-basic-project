#include<iostream>
using namespace std;

class ntoone{
    public:
    int fun(int n){
        if(n==0){
            return 1;
        }
        cout<< n<<endl;
        fun(n-1);
        
    }
};

int main(){
    int n;
    cin>>n;
    ntoone obj;
    obj.fun(n);
}