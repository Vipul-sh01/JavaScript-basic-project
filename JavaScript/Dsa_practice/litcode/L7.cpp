#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int rem;
    int rev = 0;

    while(n != 0){
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
         if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
            return 0; 
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) {
            return 0; 
        }
    }
    cout<<rev;
}