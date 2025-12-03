#include<iostream>
using namespace std;

class patturn{
    public:
    // void fun(int n){
    //     for(int i = 1; i<=n; i++){
    //         for(int j = 1; j<=i; j++){
    //             cout<< "* ";
    //         }
    //         cout<< " "<< endl;
    //     }
    // }
    void fun(int n){
        for(int i = 0; i<=n; i++){
            for(int j = 0; j<=n-i; j++){
                cout<< "  ";
            }
            for(int k = 0; k<2*i - 1; k++){
                cout<<"* ";
            }
            for(int s = 0; s< 2*n - 2*i; s++){
                cout<< "  ";
            }
            for(int k = 0; k<2*i - 1; k++){
                cout<<"* ";
            }
            for(int s = 0; s< 2*n - 2*i; s++){
                cout<< "  ";
            }
            for(int k = 0; k<2*i - 1; k++){
                cout<<"* ";
            }
            for(int s = 0; s< 2*n - 2*i; s++){
                cout<< "  ";
            }
            for(int k = 0; k<2*i - 1; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int a;
    cin>> a;
    patturn obj;
    obj.fun(a);
}