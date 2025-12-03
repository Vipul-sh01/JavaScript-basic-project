#include<iostream>
using namespace std;

class print{
    public:
    int fun(int n){
        if(n <= 0){
            return 0;
        }
        cout<<n<<endl;
        fun(n-1);
        // cout<<n<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    print obj;
    obj.fun(n);
}