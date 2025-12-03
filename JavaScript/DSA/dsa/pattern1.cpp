#include<iostream>
using namespace std;

int fun(int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
        cout<<"2 ";
       }
       cout << endl;
       
    }
    for (int i = n; i >  0; i--)
    {
       for (int j = 0; j < i; j++)
       {
        cout<<"7 ";
       }
       cout << endl;
       
    }
    
}

int main(){
    int a =5;
    fun(a);
}