#include<iostream>
using namespace std;

void fun(int r, int c){
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
           if (i==1||i==r||j==1||j==c)
           {
            cout<< "* ";
           }else{
            cout << "  "; 
           }
           
        }
        cout<< endl;
        
    }
    
}
int main(){
 int a =9;
 int b =5;
 fun(a, b);
 return 0;
}