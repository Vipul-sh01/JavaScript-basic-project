#include<iostream>
#include <cstring> 
using namespace std;

int main(){
    char arr[] = "hello";
    int n = strlen(arr);

   string t = " ";  // string is Object of class string
   for(int i = n-1; i>=0; i--){
    t = t+arr[i];
   }
   cout<<t.length(); // lenght is a method of string class;
   cout<<t;
}


