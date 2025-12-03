#include<iostream>
using namespace std;

int main(){
    int n = 3456;
    int rev, rem;
    if (n!=0)
    {
       rem = n/10;
       rev = rev*10+rem;
       n = n/10;
    }
    
}