#include<iostream>
using namespace std;

class butter{
    public:
    void fun(int n){
        for(int i = n; i>0; i--){
            for(int j = 0; j<=n; j++){
               if(j>=i){
                cout<<"* ";
               }
               else{
                cout<<"  ";
               }
            }
            cout<<endl;
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<=n; j++){
                if(j<=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
           for(int j = 0; j<=n; j++){
                if(j<=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
};

int main(){
    int a;
    cin>>a;
    butter obj;
    obj.fun(a);
}
