#include<stdio.h>

int fun(int n){
   if (n == 0)
   {
    return 0;
   }
   else{
    return fun(n/10)+ n%10; 
   }  
}

int main(){
    int x = 253;
    printf(" sum = %d", fun(x));
    return 0;
}