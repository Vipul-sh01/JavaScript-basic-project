#include<iostream>
using namespace std;

void fun(int n){    
    for (int i = n; i > 0; i--)
    {
       for (int j = 1; j <= n; j++)
       {
        if (j>=i)
        {
           cout<< "* ";
        }
        else{
            cout <<"  ";
        }
       }
       cout<< endl;
       
    }
    
}

int main(){
 int a = 4;
 fun(a);
 return 0;
}