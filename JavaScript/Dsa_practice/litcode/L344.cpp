#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char s[] = "vipul";
    int n = strlen(s);

    for(int i = 0; i<n/2; i++){
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }

    for(int i = 0; i<n; i++){
        cout<<s[i];
    }
}