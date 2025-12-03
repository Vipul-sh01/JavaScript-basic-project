#include<iostream>
using namespace std;

class coun{
    public:
    int fun(int n){
        if(n == 0){
            return 0;
        }
        fun(n-1);
        cout<<n<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    coun obj;
    obj.fun(n);
}