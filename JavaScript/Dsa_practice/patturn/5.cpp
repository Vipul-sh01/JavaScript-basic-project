#include<iostream>
using namespace std;

class patturn{
    public:
    int fun(int n){
        if(!n<=1 && n%2 != 0){
            for(int i = 0; i<n; i++){
                for(int j = 0; j<n-i; j++){
                    cout<<"  ";
                }
                for(int k = 0; k<2*i-1; k++){
                    cout<<"* ";
                }
                cout<<endl;
            }
            for(int i = 0; i<n; i++){
                for(int j = 0; j<n; j++){
                    if(j == n-1){
                        cout<<"* ";
                    }
                    cout<<"  ";
                }
                cout<<endl;
            }
            for(int i = 0; i< n- (n/2+1); i++){
                cout<<" ";
            }
            for(int i = 0; i<= n+1; i++){
                cout<< "* ";
            }
            cout<<endl;

            for(int i = 0; i<n+1; i++){
                // for(int j = 0; j< n-n; j++){
                //     cout<<"1 ";
                // }
                cout<<"* ";
                for(int j = 0; j< 2*n-3; j++){
                    cout<<"  ";
                }
                cout<<"* "<< endl;
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    patturn obj;
    obj.fun(n);
}